#include <iostream>
using namespace std;
typedef long long ll;
int main(void){
    ll n, res = 1, m = 1e9 + 7;
    cin >> n;
    while(n){
        res *= (n - 1);
        res %= m;
        n -= 2;
    }
    cout << res;
    return 0;
}