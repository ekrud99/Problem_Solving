#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, res = 0;

    cin >> n;

    while(n >= 0){
        if(n % 5 == 0){
            cout << res + n / 5;
            return 0;
        }
        ++res;
        n -= 3;
    }

    cout << -1;

    return 0;
}