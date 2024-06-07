#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    long long n, v, res = 1, pre = 1;
    cin >> n;
    vector<long long> vec(n);

    rep(i, 0, n) cin >> vec[i];

    rep(i, 2, n + 1){
        if(vec[n - i] > pre) ++pre;
        else if(vec[n - i] < pre) pre = vec[n - i];
        res += pre;
    }

    cout << res;

    return 0;
}