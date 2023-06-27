#include <iostream>

#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
int t, dp[31][31];

int main(void){
    FAST;

    cin >> t;

    rep(i, 0, 31){
        dp[i][i] = 1;
        dp[i][1] = i;
        dp[i][0] = 1;
    }

    rep(i, 2, 31){
        rep(j, 1, i){
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
        }
    }

    rep(i, 0, t){
        int n, m;
        cin >> n >> m;
        cout << dp[m][n] << endl;
    }

    return 0;
}