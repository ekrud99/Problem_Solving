#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, m, res = 0, cur = 0;
    cin >> n >> m;
    vector<int> vec(n);

    rep(i, 0, n){
        cin >> vec[i];
        if(cur + vec[i] > m){
            ++res;
            cur = vec[i];
            continue;
        }
        cur += vec[i];
    }

    if(cur > 0) ++res;

    cout << res;

    return 0;
}