#include <iostream>
#include <map>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, res = 0;
    string str;
    map<string, int> mp;
    cin >> n;
    vector<string> vec(n);

    rep(i, 0, n){
        cin >> str;
        mp[str] = i;
    }

    rep(i, 0, n) cin >> vec[i];

    rep(i, 0, n - 1){
        rep(j, i + 1, n){
            if(mp[vec[i]] < mp[vec[j]]) ++res;
        }
    }

    cout << res << "/" << n * (n - 1) / 2;

    return 0;
}