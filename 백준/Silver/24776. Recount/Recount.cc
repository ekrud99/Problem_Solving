#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string name, res;
int mx = -1;
bool flag = false;
map<string, int> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(1){
        getline(cin, name);
        if(name == "***") break;
        ++mp[name];
        if(mx < mp[name]){
            mx = mp[name];
            flag = true;
            res = name;
        }
        else if(mx == mp[name]){
            flag = false;
        }
    }

    if(flag) cout << res;
    else cout << "Runoff!";

    return 0;
}