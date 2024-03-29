#include <iostream>
#include <string>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    string str;

    cin >> n;

    rep(i, 0, n){
        map<char, int> mp;
        bool flag = true;
        cin >> str;
        rep(i, 0, str.length()){
            ++mp[str[i]];
            if(mp[str[i]] == 3){
                if(str[i + 1] != str[i]){
                    flag = false;
                    break;
                }
                else{
                    mp[str[i]] = 0;
                    ++i;
                }
            }
        }
        if(flag) cout << "OK" << endl;
        else cout << "FAKE" << endl;
    }

    return 0;
}