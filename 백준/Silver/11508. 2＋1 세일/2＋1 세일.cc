#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, res = 0;

    cin >> n;
    vector<int> vec(n);

    rep(i, 0, n) cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<int>());

    rep(i, 0, n){
        if((i + 1) % 3 == 0) continue;
        res += vec[i];
    }

    cout << res;

    return 0;
}