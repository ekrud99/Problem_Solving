#include <bits/stdc++.h>

#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define INF numeric_limits<ll>::max()

using namespace std;
typedef long long ll;

ll n, m;
ll mi = INF;
vector<ll> vec;

bool check(ll t){
    ll total = 0;

    rep(i, 0, n){
        total += (t / vec[i]);
    }
    if(total >= m) return true;
    return false;
}

ll b_search(){
    ll lo = 1;
    ll hi = vec[0] * m;
    ll mid;

    while(lo + 1 < hi){
        mid = (lo + hi) / 2;
        //cout << "lo: " << lo << " mid: " << mid << " hi: " << hi << endl;
        if(check(mid)){
            hi = mid;
        } 
        else lo = mid;
    }
    //cout << "lo: " << lo << " mid: " << mid << " hi: " << hi << endl;
    return hi;
}

int main(void){
    FAST;

    cin >> n >> m;

    rep(i, 0, n){
        int e;
        cin >> e;
        vec.push_back(e);
    }

    sort(vec.begin(), vec.end());

    // if(m == 1){
    //     cout << vec[0];
    //     return 0;
    // }

    ll res = b_search();
    cout << res;
    
    return 0;
}
