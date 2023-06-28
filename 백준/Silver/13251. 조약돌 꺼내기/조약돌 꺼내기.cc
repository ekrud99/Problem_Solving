#include <iostream>

#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int m, n, k, dp[51];
double p[51], res = 0.0;

int main(void){
    FAST;

    cin >> m;

    rep(i, 0, m){
        cin >> dp[i];
        n += dp[i];
    }

    cin >> k;

    rep(i, 0, m){
        if(dp[i] >= k){
            p[i] = 1.0;
            rep(j, 0, k){
                p[i] *= (double)(dp[i] - j) / (n - j);
            }
        } 
        res += p[i];
    }

    cout.precision(9);
    cout << res;

    return 0;
}