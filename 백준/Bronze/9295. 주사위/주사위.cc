#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int t, a, b;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> t;

    rep(i, 0, t){
        cin >> a >> b;
        cout << "Case " << i + 1 << ": " << a + b << endl;
    }

    return 0;
}