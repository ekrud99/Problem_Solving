#include <iostream>
#include <algorithm>
#include <limits>
#include <cstring>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n";
#define INF numeric_limits<int>::max()
using namespace std;

int n, m, mp[7][7], mi = INF;
int dx[3] = {-1, 0, 1};

bool is_possible(int x){
    return (x >= 0 && x < m);
}

int dfs(int y, int x, int dir){
    if(y == n){
        return 0;
    }

    int res = INF;

    rep(i, 0, 3){
        if(dir == i) continue;
        int ny = y + 1;
        int nx = x + dx[i];
        if(!is_possible(nx)) continue;
        

        res = min(dfs(ny, nx, i) + mp[y][x], res);

    }

    return res;

}

int main(void){
    FAST;

    cin >> n >> m;
    rep(i, 0, n){
        rep(j, 0, m){
           cin >> mp[i][j];
        }
    }

    rep(i, 0, m){
        mi = min(mi, dfs(0, i, -1));
    }

    cout << mi;

    return 0;
}
