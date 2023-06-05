#include <iostream>
#include <vector>

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

int n, m, cnt;
vector<int> visited;
vector<vector<int>> vec;

void dfs(int v){
    if(visited[v]) return;
    visited[v] = 1;
    rep(i, 0, vec[v].size()){
        if(!visited[vec[v][i]]) dfs(vec[v][i]);
    }
}

int main(){
    FAST; // 입출력 빠르게 하기 위해
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> m;
    visited.resize(n + 1);
    vec.resize(n + 1);

    rep(i, 0, m){
        int s, e;
        cin >> s >> e;
        vec[s].pb(e);
        vec[e].pb(s);
    }

    REP(i, 1, n){
        if(!visited[i]){
            cnt++;
            dfs(i);
        }
    }

    cout << cnt;
    

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}