#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int t, n, mi, s;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> t;

    rep(i, 0, t){
        s = 0;
        mi = 101;
        rep(i, 0, 7){
            cin >> n;
            if(n % 2 == 0){
                s += n;
                if(n < mi) mi = n;
            }
        }
        cout << s << " " << mi << endl;
    }

    return 0;
}