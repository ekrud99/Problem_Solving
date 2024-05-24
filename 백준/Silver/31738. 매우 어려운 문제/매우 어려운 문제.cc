#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;
typedef long long ll;

ll fac(ll n){
    if(n <= 1) return 1;
    return n * fac(n - 1);
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    ll n, m, res = 1;
    cin >> n >> m;

    if(n > m) cout << 0;
    else{
        rep(i, 1, n + 1) res = (res * i) % m;
        cout << res;
    }

    return 0;
}