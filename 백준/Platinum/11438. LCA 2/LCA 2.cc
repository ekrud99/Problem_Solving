#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define pb push_back

using namespace std;

int n, m, diff;
int parent[21][100001];
vector<vector<int>> tree;
vector<int> depth, visited;


void bfs(){ // bfs 탐색을 통해 각 node의 depth, parent 세팅
    queue<int> q;
    q.push(1); // root는 1번 node
    visited[1] = true;
    int level = 1, size = 1, cnt = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int next : tree[cur]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
                parent[0][next] = cur; // next node의 부모는 cur node
                depth[next] = level; // next node의 깊이 저장
            }
        }
        ++cnt;
        if(cnt == size){ // 해당 depth의 모든 node 방문 시
            cnt = 0;
            size = q.size(); 
            ++level; // depth 1 증가
        }
    }
}

int findLCA(int node1, int node2){ 

    if(depth[node1] > depth[node2]){
        int tmp = node1;
        node1 = node2;
        node2 = tmp;
    }

    for(int i = diff; i >= 0; --i){
        if(pow(2, i) <= depth[node2] - depth[node1]){ 
            if(depth[node1] <= depth[parent[i][node2]]){
                node2 = parent[i][node2];
                // 두 node의 깊이 차이가 2의 i승보다 더 크면 2의 i승 만큼 뛰어넘음
            }
        }
    }

    for(int i = diff; i >= 0 && node1 != node2; --i){
        if(parent[i][node1] != parent[i][node2]){ // 다를때 올라감
            node1 = parent[i][node1];
            node2 = parent[i][node2];
        }
    }

    int lca = node1;
    if(node1 != node2) lca = parent[0][lca];
    // 다르면 한칸 올라가줌

    return lca; // LCA return

}

void connect(int node1, int node2){ // tree 양방향 연결
    tree[node1].pb(node2);
    tree[node2].pb(node1);
}

int main(void){
    FAST;

    cin >> n;
    tree.resize(n + 1); // root는 1번 node
    depth.resize(n + 1);
    visited.resize(n + 1);

    rep(i, 0, n - 1){ // tree 구성
        int node1, node2;
        cin >> node1 >> node2;
        connect(node1, node2);
    }

    bfs(); // parent, depth, visited 세팅

    int tmp = 1;
    diff = 0;

    while(tmp <= n){ // 가능한 최대 깊이 차이, 밑에서 있을 parent table을 작성하기 위해 필요함
        tmp *= 2;
        ++diff;
    }

    rep(i, 1, diff + 1){
        rep(j, 1, n + 1){
            parent[i][j] = parent[i - 1][parent[i - 1][j]];
            //j의 2^i 번째 부모는 j의 2^(i - 1) 번째 부모 node의 2^(i - 1) 번째 부모
        }
    }

    cin >> m;

    rep(i, 0, m){
        int node1, node2, res;
        cin >> node1 >> node2;
        res = findLCA(node1, node2);
        cout << res << endl;
    }

    return 0;
}