#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;
typedef long long ll;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    ll n, r;
    cin >> n >> r;
    cout << n + 2 * r - 1;

    return 0;
}