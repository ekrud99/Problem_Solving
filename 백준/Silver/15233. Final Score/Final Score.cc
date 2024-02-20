#include <iostream>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int a, b, g, ag = 0, bg = 0;
string player;
unordered_map<string, string> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> a >> b >> g;

    rep(i, 0, a){
        cin >> player;
        mp[player] = "A";
    }

    rep(i, 0, b){
        cin >> player;
        mp[player] = "B";
    }

    rep(i, 0, g){
        cin >> player;
        if(mp[player] == "A") ++ag;
        else ++bg;
    }

    if(ag > bg) cout << "A";
    else if(ag < bg) cout << "B";
    else cout << "TIE";

    return 0;
}