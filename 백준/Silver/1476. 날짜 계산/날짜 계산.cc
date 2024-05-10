#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int e, s, m, n = 1, te = 0, ts = 0, tm = 0;

    cin >> e >> s >> m;

    while(1){
        ++te; ++ts; ++tm;
        if(te > 15) te = 1;
        if(ts > 28) ts = 1;
        if(tm > 19) tm = 1;
        if(te == e && ts == s && tm == m) break;
        ++n;
    }

    cout << n;

    return 0;
}