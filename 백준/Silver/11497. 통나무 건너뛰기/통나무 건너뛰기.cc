#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define MIN numeric_limits<int>::min()

using namespace std;

int t, n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> t;

    rep(i, 0, t){
        cin >> n;
        vector<int> vec(n);
        rep(j, 0, n) cin >> vec[j];
        sort(vec.begin(), vec.end());
        int res = MIN;
        rep(i, 2, n){
            res = max(res, abs(vec[i] - vec[i - 2]));
        }
        cout << res << endl;
    }
    return 0;
}