#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define INF numeric_limits<ll>::max()
#define MIN numeric_limits<ll>::min()
#define pb push_back

using namespace std;
typedef long long ll;

int n, m;
vector<ll> cards;

bool b_search(int card){
    ll lo = 0;
    ll hi = n - 1;
    ll mid;

    while(lo + 1 < hi){
        mid = (lo + hi) / 2;
        if(cards[mid] == card) return true;
        else if(cards[mid] < card) lo = mid;
        else hi = mid;
    }
    if(cards[lo] == card || cards[hi] == card) return true;
    return false;
}

int main(void){
    FAST;
    
    cin >> n;

    rep(i, 0, n){
        ll card;
        cin >> card;
        cards.pb(card);
    }

    sort(cards.begin(), cards.end());

    cin >> m;

    rep(i, 0, m){
        ll card;
        cin >> card;
        if(b_search(card)) cout << 1 << " ";
        else cout << 0 << " ";
    }
    
    return 0;
}
