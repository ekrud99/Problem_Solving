#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long ll;
int main(void){
    FAST;

    ll a, b;
    cin >> a >> b;
    if(a < b){
        ll tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a == b) cout << 0 << endl;
    else cout << a - b - 1 << endl;
    if(a - b == 1) return 0;
    for(ll i = 0; i < a - b - 1; ++i){
        cout << b + i + 1 << " ";
    }

    return 0;
}

