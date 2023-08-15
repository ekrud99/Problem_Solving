#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define pb push_back

using namespace std;
typedef long long ll;

bool cmp(ll a, ll b){
    if(a > b) return true;
    return false;
}

vector<ll> tmp;

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    string str;
    cin >> str;

    rep(i, 0, str.length()){
        ll num;
        num = str[i] - '0';
        tmp.pb(num);
    }

    sort(tmp.begin(), tmp.end(), cmp);

    for(ll i : tmp) cout << i;

    return 0;
}