#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res = 0;
string str;
map<string, int> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> str;
        ++mp[str];
    }

    rep(i, 0, n){
        cin >> str;
        if(mp[str] > 0){
            ++res;
            --mp[str];
        }
    }

    cout << res;

    return 0;
}