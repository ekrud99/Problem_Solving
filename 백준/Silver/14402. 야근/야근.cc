#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, res = 0;
    string name, flag, pre;
    map<string, int> mp;

    cin >> n;

    while(n--){
        cin >> name >> flag;
        if(flag == "-"){
            if(mp[name] == 0) ++res;
            else --mp[name];
        }
        else ++mp[name];
    }

    for(auto m: mp) res += m.second;

    cout << res;

    return 0;
}