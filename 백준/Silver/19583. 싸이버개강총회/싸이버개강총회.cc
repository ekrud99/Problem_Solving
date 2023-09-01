#include <iostream>
#include <unordered_map>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

unordered_map<string, int> in, out;

int s, e, q, cnt;
string str;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    rep(i, 0, 3){
        string t;
        cin >> str;
        rep(j, 0, 5){
            if(str[j] == ':') continue;
            t += str[j];
        }
        if(i == 0) s = stoi(t);
        else if(i == 1) e = stoi(t);
        else q = stoi(t);
    }
    while(1){
        string logg, nickname, tmp;
        cin >> logg >> nickname;
        if(logg == "" && nickname == "") break;
        rep(j, 0, 5){
            if(logg[j] == ':') continue;
            tmp += logg[j];
        }
        int ti = stoi(tmp);
        if(ti <= s) in[nickname] = ti;
        else if(ti >= e && ti <= q && out[nickname] == 0){
            ++out[nickname];
            if(in[nickname] != 0){
                ++cnt;
                //cout << nickname << endl;
            } 
        }
    }

    cout << cnt;

    return 0;
}