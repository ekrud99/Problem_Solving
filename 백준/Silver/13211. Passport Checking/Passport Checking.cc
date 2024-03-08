#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, res = 0;
string p;
map<string, bool> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> p;
        mp[p] = true;
    }

    cin >> m;

    while(m--){
        cin >> p;
        if(mp[p]) ++res;
    }

    cout << res;

    return 0;
}