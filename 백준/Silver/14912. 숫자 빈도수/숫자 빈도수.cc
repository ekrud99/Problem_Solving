#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, d, res = 0;
    cin >> n >> d;

    rep(i, 1, n + 1){
        string num = to_string(i);
        rep(j, 0, num.length()){
            int digit = num[j] - '0';
            if(digit == d) ++res;
        }
    }

    cout << res;

    return 0;
}