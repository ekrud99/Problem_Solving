#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<double> vec(n);

    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());

    cout << fixed;
    cout.precision(3);

    rep(i, 0, 7) cout << vec[i] << endl;

    return 0;
}