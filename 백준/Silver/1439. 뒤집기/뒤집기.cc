#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int res = 0;
string S;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> S;

    rep(i, 0, S.length() - 1){
        if(S[i] != S[i + 1]) ++res;
    }

    cout << (res + 1) / 2;

    return 0;
}