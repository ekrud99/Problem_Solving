#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 1, n + 1){
        int lc = n - i;
        int lc2 = i;
        while(lc--) cout << " ";
        while(lc2--) cout << "*";
        cout << endl;
    }

    return 0;
}