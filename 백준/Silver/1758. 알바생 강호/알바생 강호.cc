#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;
typedef long long ll;
int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    ll n, m, res = 0;
    cin >> n;
    vector<ll> vec(n);

    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end(), greater<int>());

    rep(i, 1, n + 1){
        ll tip = vec[i - 1] - (i - 1) > 0 ? vec[i - 1] - (i - 1) : 0;
        res += tip;
    }

    cout << res;

    return 0;
}