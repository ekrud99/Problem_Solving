#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m;
string app;
map<string, bool> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        bool flag = false;
        cin >> m;
        while(m--){
            cin >> app;
            if(!mp[app] && !flag){
                cout << app << " ";
                mp[app] = true;
                flag = true;
            }
            else{
                continue;
            } 
        }
    }

    return 0;
}