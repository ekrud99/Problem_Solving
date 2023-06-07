#include <iostream>
#include <vector>
#include <queue>
#include <cstring>


#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i) 
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std; // std 클래스에 있는것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;
int v, flag;
vector<vector<pii>> tree;
int dist[100001], visited[100001];

void bfs(int node){
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        rep(i, 0, tree[cur].size()){
            pii edge = tree[cur][i];
            if(visited[edge.first]) continue;
            visited[edge.first] = true;
            q.push(edge.first);

            dist[edge.first] = dist[cur] + edge.second;
        }
    }

}

int main(){
    FAST; // 입출력 빠르게 하기 위해
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif
    cin >> v;
    tree.resize(v + 1);
    
    REP(i, 0, v){
        int s;
        cin >> s;

        while(1){
            int e, w;
            cin >> e;
            if(e == -1) break;
            cin >> w;
            tree[s].pb(make_pair(e, w));
        }
    }

    bfs(1);
    int maxIdx = 1;

    REP(i, 2, v){
        if(dist[maxIdx] < dist[i]) maxIdx = i;
    }
    memset(dist, 0, sizeof(dist));
    memset(visited, 0, sizeof(visited));
    bfs(maxIdx);

    maxIdx = 1;

    REP(i, 2, v){
        if(dist[maxIdx] < dist[i]) maxIdx = i;
    }


    cout << dist[maxIdx];

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}
