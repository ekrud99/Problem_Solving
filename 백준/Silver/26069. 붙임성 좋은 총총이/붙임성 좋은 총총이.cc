#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res = 0;
string str1, str2;
map<string, bool> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> str1 >> str2;
        if(str1 == "ChongChong" || str2 == "ChongChong" || mp[str1] || mp[str2]){
            mp[str1] = true;
            mp[str2] = true;
        }
    }

    for(auto m : mp) if(m.second) ++res;

    cout << res;

    return 0;
}