#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, x, l, r, res = 0;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<int> vec(n);

    rep(i, 0, n) cin >> vec[i];
    cin >> x;
    sort(vec.begin(), vec.end());

    l = 0, r = n - 1;

    while(l < r){
        int sum = vec[l] + vec[r];
        if(sum == x){
            ++res;
            --r;
        }else if(sum < x){
            ++l;
        }else{
            --r;
        }
    }

    cout << res;

    return 0;
}