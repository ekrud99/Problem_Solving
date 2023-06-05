#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

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

int n, m, v;
vector<vector<int>> vec;
vector<int> visited;
queue<int> q;
void dfs(int v){
    //if(visited[v]) return;
    cout << v << " ";
    visited[v] = true;
    rep(i, 0, vec[v].size()){
        if(!visited[vec[v][i]]) dfs(vec[v][i]);
    }
}

void bfs(int v){
    q.push(v);
    visited[v] = 1;

    while(!q.empty()){
        int cur_node = q.front();
        q.pop();
        cout << cur_node << " ";
        rep(i, 0, vec[cur_node].size()){
            if(!visited[vec[cur_node][i]]){
                visited[vec[cur_node][i]] = 1;
                q.push(vec[cur_node][i]);
            }
        }
    }
    
}

int main(){
    FAST; // 입출력 빠르게 하기 위해
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> m >> v;
    visited.resize(n + 1);
    vec.resize(n + 1);
    rep(i, 0, m){
        int s, e;
        cin >> s >> e;
        vec[s].pb(e);
        vec[e].pb(s);
    }
    REP(i, 1, n){
        sort(vec[i].begin(), vec[i].end());
    }
    dfs(v);
    cout << endl;
    visited = vector<int>(n + 1, 0);
    bfs(v);
#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}
