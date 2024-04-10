#include <iostream>
#include <limits>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define rep(i, a, b) for(auto i = a; i < b; ++i);
#define rep(i, a, b) for(auto i = (a); i < (b); ++i)

#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

ll check(vector<int> vec, ll cap){
    int cnt = 0;
    for(auto i: vec) cnt += i / cap;
    return cnt;
}

int main(void){
    FAST;
    
    ll n, k, mid;
    cin >> n >> k;
    vector<int> vec(n);
    rep(i, 0, n){
        cin >> vec[i];
    } 

    ll lo = 0, hi = numeric_limits<int>::max();

    while(lo + 1 < hi){
        mid = (lo + hi) / 2;
        if(check(vec, mid) >= k) lo = mid;
        else hi = mid;
    }

    cout << lo;

    return 0;
}