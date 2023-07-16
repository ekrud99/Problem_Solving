#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
using namespace std;
typedef long long ll;

ll x, y;
int win_rate;

bool check(ll game){
    ll wr = (y + game) * 100 / (x + game);
    //cout << "wr: " << wr << endl;
    if(wr <= win_rate) return true;
    return false;
}

ll b_search(){
    ll lo = 0;
    ll hi = x + 1;
    ll mid;

    while(lo + 1 < hi){
        mid = (lo + hi) / 2;
        //cout << "lo: " << lo << " mid: " << mid << " hi: " << hi << endl;
        if(check(mid)) lo = mid;
        else hi = mid;
    }
    //cout << "lo: " << lo << " mid: " << mid << " hi: " << hi << endl;
    return hi;
}

int main(void){
    FAST;

    cin >> x >> y;

    win_rate = y * 100 / x;
    int cnt = b_search();
    if(cnt > x) cout << -1;
    else cout << cnt;

    return 0;
}