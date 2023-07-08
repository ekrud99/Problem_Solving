#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;
typedef long long ll;

ll n, m;
vector<ll> snack;

bool calc(ll len){ // 가능한 과자 길이인지 판단
    ll cnt = 0;

    rep(i, 0, n){
        cnt += (snack[n - i - 1] / len);
        if(cnt >= m) return true;
    }

    return false;
}

ll b_search(){ // 이분탐색
    ll lo = 1;
    ll hi = snack[n - 1];
    bool flag = true; // while 문에 진입하지 않은 경우 snack 맨 앞을 return
    while(lo + 1 < hi){
        flag = false;
        ll mid = (lo + hi) / 2;
        //cout << lo << " " << mid << " " << hi << endl;
        if(calc(mid)) lo = mid;
        else hi = mid;
    }
    if(calc(hi)) return hi;
    return lo;
}

int main(void){
    FAST;

    cin >> m >> n;

    rep(i, 0, n){
        ll c;
        cin >> c;
        snack.push_back(c);
    }

    sort(snack.begin(), snack.end());

    int c = b_search();
    if(calc(c)) cout << c;
    else cout << 0;

    return 0;
}