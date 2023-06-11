#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
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

vector<vector<int>> com;
vector<int> visited, hack;
int n, m, ma;

void bfs(int node){
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        rep(i, 0, com[cur].size()){
            int next = com[cur][i];
            if(visited[next]) continue;
            visited[next] = 1;
            hack[next] += 1;
            q.push(next);
        }
    }

}

int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> m;
    com.resize(n + 1);
    visited.resize(n + 1);
    hack.resize(n + 1);
    rep(i, 0, m){
        int com1, com2;
        cin >> com1 >> com2;
        com[com1].pb(com2);
    }

    REP(i, 0, n){
        memset(&visited[0], 0, sizeof(int) * (n + 1));
        bfs(i);
    }

    ma = 0;
    REP(i, 0, n){
        if(ma < hack[i]) ma = hack[i];
    }

    REP(i, 0, n){
        if(hack[i] == ma){
            cout << i << " ";
        }
    }



#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}