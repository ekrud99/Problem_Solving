#include <iostream>
#include <unordered_map>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

unordered_map<string, bool> in, out; // key: nickname, value: check

string s, e, q;
int cnt;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> s >> e >> q;

    while(1){
        string logg, nickname;
        cin >> logg >> nickname;

        if(logg == "" && nickname == "") break;
        
        if(logg <= s) in[nickname] = true;
        else if(logg >= e && logg <= q && !out[nickname]){
            out[nickname] = true;
            if(in[nickname]) ++cnt;
        }
    }

    cout << cnt;

    return 0;
}