#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res = -1, gap = -1;

int calc(int f, int m, int r){
    return min(m - f, r - m);
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<int> vec(n);

    rep(i, 0, n) cin >> vec[i];

    sort(vec.begin(), vec.end());

    if(vec.back() - vec.front() == n - 1){
        cout << -1;
        return 0;
    }

    rep(i, 0, n - 1){
         int mid = (vec[i] + vec[i + 1]) / 2;
         int gap_candidate = calc(vec[i], mid, vec[i + 1]);
         if(gap_candidate > gap){
            gap = gap_candidate;
            res = mid;
         }
    }

    cout << res;

    return 0;
}