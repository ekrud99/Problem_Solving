#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, x, y, res, visited[100][100] = {false, };

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> x >> y;
        rep(j, x, x + 10){
            rep(k, y, y + 10){
                visited[j][k] = true;
            }
        }
    }

    rep(i, 0, 100){
        rep(j, 0, 100){
            if(visited[i][j]) res += 1;
        }
    }

    cout << res;

    return 0;
}