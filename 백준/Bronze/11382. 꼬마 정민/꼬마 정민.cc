#include <iostream>

#define rep(i ,a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;

long long res = 0;

int main(void){
    FAST;

    rep(i, 0, 3){
        long long n;
        cin >> n;
        res += n;
    }

    cout << res;

    return 0;
}
