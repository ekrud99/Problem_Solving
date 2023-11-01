#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int cnt = 0;
string str, res, cmp = "UCPC";

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(cin >> str) res += str;

    rep(i, 0, res.length()){
        if(res[i] == cmp[cnt]) ++cnt;
        if(cnt == 4) break;
    }

    if(cnt == 4) cout << "I love UCPC";
    else cout << "I hate UCPC";

    return 0;
}