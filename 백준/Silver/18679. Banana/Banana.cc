#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, t, k;
    string s1, eq, s2;
    map<string, string> mp;

    cin >> n;

    rep(i, 0, n){
        cin >> s1 >> eq >> s2;
        mp[s1] = s2;
    }

    cin >> t;

    while(t--){
        cin >> k;
        rep(i, 0, k){
            string str;
            cin >> str;
            cout << mp[str] << " ";
        }
        cout << endl;
    }

    return 0;
}