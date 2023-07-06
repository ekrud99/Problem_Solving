#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long ll;
ll n, k;
vector<ll> cable;

ll calc(ll len){
    ll cnt = 0;
    rep(i, 0, k){
        cnt += (cable[i] / len);
    }
    return cnt;
}

ll b_search(){
    ll lo = 1, hi = cable[k - 1];
    ll res = 0;
    while(lo + 1 < hi){
        ll mid = (lo + hi) / 2;
        if(calc(mid) >= n){
            lo = mid;
        } 
        else hi = mid;
    }
    if(calc(hi) == n) return hi;
    return lo;
}

int main(void){
    FAST;

    cin >> k >> n;
    cable.resize(k);

    rep(i, 0, k){
        cin >> cable[i];
    }

    sort(cable.begin(), cable.end());

    cout << b_search();

    return 0;
}