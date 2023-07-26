#include <iostream>
#include <vector>
#include <queue>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define pb push_back

using namespace std;

int n, m;
vector<vector<int>> tree;
vector<int> parent, depth, visited;

void bfs(){ // dfs 탐색을 통해 각 node의 depth, parent 세팅
    queue<int> q;
    q.push(1); // root는 1
    visited[1] = true;
    int level = 1, size = 1, cnt = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int next : tree[cur]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
                parent[next] = cur; // next node의 부모는 cur node
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

    if(depth[node1] < depth[node2]){ // 계산 편의 위해 항상 깊은 node를 node1으로 
        int tmp = node1;
        node1 = node2;
        node2 = tmp;
    }

    while(depth[node1] != depth[node2]){ // 깊이가 맞을 때가지 올라감
        node1 = parent[node1]; 
    }

    while(node1 != node2){ // 위에서 깊이를 맞췄으므로 동시에 올라가면서 같으면 LCA
        node1 = parent[node1];
        node2 = parent[node2];
    }

    return node1; // LCA return

}

void connect(int node1, int node2){ // tree 양방향 연결
    tree[node1].pb(node2);
    tree[node2].pb(node1);
}

int main(void){
    FAST;

    cin >> n;
    tree.resize(n + 1); // root는 1번 node
    parent.resize(n + 1);
    depth.resize(n + 1);
    visited.resize(n + 1);

    rep(i, 0, n - 1){
        int node1, node2;
        cin >> node1 >> node2;
        connect(node1, node2);
    }

    bfs();

    cin >> m;

    rep(i, 0, m){
        int node1, node2, res;
        cin >> node1 >> node2;
        res = findLCA(node1, node2);
        cout << res << endl;
    }

    return 0;
}