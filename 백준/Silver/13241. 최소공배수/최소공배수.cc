#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a * b) / gcd(a, b);
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    ll a, b;

    cin >> a >> b;

    cout << lcm(a, b);

    return 0;
}