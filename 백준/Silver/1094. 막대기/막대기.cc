#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int x, res = 0;
    cin >> x;

    while(x > 0){
        if(x % 2 == 1) ++res;
        x /= 2;
    }

    cout << res;

    return 0;
}