#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef long long ll;
ll n, i = 1, cnt;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n >= 0){
        // cout << "n: " << n << " i: " << i << endl;
        n -= i;
        ++cnt;
        ++i;
    }
    cout << cnt - 1;
    return 0;
}