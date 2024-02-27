#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

long long n, res = 0, sum = 0, sub;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<long long> vec(n);
    rep(i, 0, n){
        cin >> vec[i];
        sum += vec[i];
    } 
    sort(vec.begin(), vec.end());
    rep(i, 0, n){
        res += vec[i] * (sum - vec[i]);
        sum -= vec[i];
    }

    cout << res;

    return 0;
}