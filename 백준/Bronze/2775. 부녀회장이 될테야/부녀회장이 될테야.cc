#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int t, k, n, dp[15][15]; // dp[i][j] = dp[i][j - 1] + dp[i - 1][j] -> 같은 층 바로 옆집 + 아랫집

int main(void){
    FAST;

    cin >> t;

    rep(i, 0, 15){ // dp table init
        dp[i][1] = 1;
        dp[0][i] = i;
    }

    rep(i, 1, 15){
        rep(j, 2, 15){
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
        }
    }

    rep(i, 0, t){
        cin >> k >> n;
        cout << dp[k][n] << endl;
    }

    return 0;
}

