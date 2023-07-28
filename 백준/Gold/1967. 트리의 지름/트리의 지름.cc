#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int n;
typedef pair<int, int> branch; // node, weight
vector<vector<branch>> tree;
bool visited[10001];
int dist[10001];

void bfs(int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(branch b : tree[cur]){
            if(visited[b.first]) continue;
            visited[b.first] = true;
            q.push(b.first);
            dist[b.first] = dist[cur] + b.second; // dist 배열 값 채워주기
        }
    }
}

int main(void){
    FAST;

    cin >> n;

    tree.resize(n + 1);

    rep(i, 0, n - 1){ // 양방향 인접리스트로 표현
        int u, v, w;
        cin >> u >> v >> w;
        tree[u].push_back(branch(v, w));
        tree[v].push_back(branch(u, w));
    }

    bfs(1);

    int idx = 1;

    rep(i, 0, n + 1){
        if(dist[idx] < dist[i]) idx = i;
    }

    //재탐색 위해 dist, visited 초기화
    memset(dist, 0, sizeof(dist)); 
    memset(visited, 0, sizeof(visited));

    bfs(idx); // 가장 먼 노드부터

    int res = -1;

    rep(i, 0, n + 1){ // 가장 멀리 있는 노드 출력
        if(res < dist[i]) res = dist[i];
    }

    cout << res;

    return 0;
}