#include <iostream>

#define rep(i ,a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;

int n, a, b;

int main(void){
    FAST;

    cin >> n;

    rep(i, 1, n + 1){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
    }

    return 0;
}
