#include <iostream>
#include <map>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res = 0;
string word;
map<string, bool> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> word;
        sort(word.begin(), word.end());
        mp[word] = true;
    }

    for(auto w: mp) res += w.second;

    cout << res;

    return 0;
}