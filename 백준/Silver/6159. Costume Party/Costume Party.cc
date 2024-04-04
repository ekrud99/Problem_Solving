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

    int n, s, cnt = 0;
    cin >> n >> s;
    vector<int> vec(n);

    rep(i, 0, n) cin >> vec[i];

    sort(vec.begin(), vec.end());

    int l = 0, r = 1;

    while(l < n - 1){
        if(vec[l] + vec[r] <= s){
            ++cnt; ++r;
            if(r == n){
                ++l; r = l + 1;        
            }
            continue;
        }
        ++l; r = l + 1;
    }

    cout << cnt;

    return 0;
}