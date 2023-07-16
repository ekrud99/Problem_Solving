#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
using namespace std;
typedef long long ll;
ll n, k;

ll check(ll cut){
    ll papers = (cut + 1) * ((n - cut) + 1);
    return papers;
}

ll b_search(){ // 가로로 자른 횟수를 찾음
    ll lo = -1;
    ll hi = n - lo;

    while(lo + 1 < hi){
        ll mid = (lo + hi) / 2;
        if(check(mid) == k) return true;
        if(check(mid) < k) lo = mid;
        else hi = mid;
    }
    return false;
}

int main(void){
    FAST;

    cin >> n >> k;

    if(b_search()) cout << "YES";
    else cout << "NO";

    return 0;
}