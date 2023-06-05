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
int n, m;
vector<int> visited;
vector<vector<int>> vec;
bool flag;
void dfs(int v, int d){
    if(flag || d == 5){
        flag = true;
        return;
    } 
    visited[v] = 1;
    rep(i, 0, vec[v].size()){
        if(!visited[vec[v][i]]) dfs(vec[v][i], d + 1);
    }
    visited[v] = 0;
}

int main(){
    FAST; // 입출력 빠르게 하기 위a해
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> m;
    visited.resize(n);
    vec.resize(n);
    rep(i, 0, m){
        int s, e;
        cin >> s >> e;
        vec[s].pb(e);
        vec[e].pb(s);
    }

    flag = false;

    rep(i, 0, n){
        dfs(i, 1);
        if(flag) break;
    }

    if(flag) cout << 1;
    else cout << 0;

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}
