#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int arr[101][101] = {0,}, a, b, c, d, res = 0;

    rep(i, 0, 4){
        cin >> a >> b >> c >> d;
        rep(j, a, c){
            rep(k, b, d){
                arr[j][k] = 1;
            }
        }
    }

    rep(i, 0, 100){
        rep(j, 0, 101){
            if(arr[i][j]) ++res;
        }
    }

    cout << res;

    return 0;
}