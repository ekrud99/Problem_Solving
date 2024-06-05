#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    long long k, a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    if(a * k + b == c * k + d) cout << "Yes " << a * k + b;
    else cout << "No";

    return 0;
}