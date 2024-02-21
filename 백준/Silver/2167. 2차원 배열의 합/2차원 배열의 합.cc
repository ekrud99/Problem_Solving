#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    int n, m, k, i, j, x, y, sum = 0;
    cin >> n >> m;
    int arr[n][m];

    rep(i, 0, n){
        rep(j, 0, m){
            cin >> arr[i][j];
        }
    }

    cin >> k;

    rep(a, 0, k){
        cin >> i >> j >> x >> y;
        sum = 0;
        rep(b, i - 1, x){
            rep(c, j - 1, y){
                sum += arr[b][c];
            }
        }
        cout << sum << endl;
    }

    return 0;
}


