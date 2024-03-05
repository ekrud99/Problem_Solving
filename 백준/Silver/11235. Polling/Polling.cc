#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<string, int> psi;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, mx = -1;
    string name;
    map<string, int> mp;

    cin >> n;

    while(n--){
        cin >> name;
        ++mp[name];
        mx = max(mx, mp[name]);
    }

    for(psi p: mp){
        if(p.second == mx) cout << p.first << endl;
    }

    return 0;
}