#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int res = 0;
string str;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(cin >> str) ++res;
    cout << res;

    return 0;
}