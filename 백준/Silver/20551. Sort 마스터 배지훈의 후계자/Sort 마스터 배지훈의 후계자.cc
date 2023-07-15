#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
using namespace std;
typedef long long ll;
ll n, m;
vector<int> vec;

ll b_search(){
    ll num;
    cin >> num;
    ll lo = -1;
    ll hi = n;
    ll mid;
    bool flag = false;

    while(lo + 1 < hi){
        mid = (lo + hi) / 2;

        if(vec[mid] < num) lo = mid;
        else hi = mid;
        if(vec[mid] == num) flag = true;
        //cout << lo << " " << mid << " " << hi << endl;
    }
    //cout << lo << " " << mid << " " << hi << endl;
    if(flag) return hi;
    return -1;
}

int main(void){
    FAST;
    
    cin >> n >> m;

    rep(i, 0, n){
        ll num;
        cin >> num;
        vec.push_back(num);
    }
    
    sort(vec.begin(), vec.end());

    rep(i, 0, m){
        cout << b_search() << "\n";
    }

    return 0;
}
