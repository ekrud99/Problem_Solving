#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int a, b, c;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> a >> b >> c;

    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout <<  (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c;

    return 0;
}