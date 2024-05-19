#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    rep(i, 0, n){
        rep(k, 0, i){
            cout << " ";
        }
        rep(j, 0, n - i){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}