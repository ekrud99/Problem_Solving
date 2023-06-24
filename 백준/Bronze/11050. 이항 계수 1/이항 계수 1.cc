#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int n, k, dp[11][11];

// dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1]
// ex) 5C2 = 4개중 1개가 2개가 결정된 경우 + 4개중 1개가 결정된 경우
int main(void){
    FAST;

    cin >> n >> k;

    for(int i = 0; i <= n; i++){
        dp[i][1] = i; // nC1 -> i
        dp[i][0] = 1; // nC0 -> 1
        dp[i][i] = 1; // nCn -> 1
    } //dp table init

    for(int i = 2; i <= n; i++){ // 2Cn start
        for(int j = 1; j < i; j++){
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
        }
    }

    cout << dp[n][k];

    return 0;
}