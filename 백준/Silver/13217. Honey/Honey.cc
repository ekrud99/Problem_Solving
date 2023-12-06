#include <iostream>
#include <algorithm>
#include <vector>

#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;

typedef long long ll;

int n, m, ggul;
ll k, t, res = 0;

int main(void){
    FAST;

    cin >> n >> m >> k;
    vector<int> ggultong(n);
    t = k;

    rep(i, 0, n){
        cin >> ggultong[i];
        k -= ggultong[i] / m;
        res += ggultong[i] / m * m;
        ggultong[i] %= m;
    }

    if(k <= 0) cout << m * t;
    else{
        sort(ggultong.begin(), ggultong.end(), greater<int>());
        int lc = n < k ? n : k;
        rep(i, 0, lc){
            res += ggultong[i];
        }
        cout << res;
    }

    return 0;
}