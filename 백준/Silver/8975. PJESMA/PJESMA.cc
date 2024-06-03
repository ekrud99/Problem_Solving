#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

map<string, bool> mp, check;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    float n, m, res = 0;
    string str;
    bool flag = false;

    cin >> n;

    rep(i, 0, n){
        cin >> str;
        mp[str] = true;
    }

    cin >> m;

    rep(i, 0, m){
        cin >> str;
        if(flag) continue;
        if(mp[str] && !check[str]){
            ++res;
            check[str] = true;
        } 
        if(res >= n / 2){
            flag = true;
            res = i + 1;
        } 
    }

    cout << res;

    return 0;
}