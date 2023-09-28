#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int t, n, m, res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> t;

    rep(i, 0, t){
        cin >> n >> m;
        vector<int> a(n), b(m);
        res = 0;
        
        rep(j, 0, n){
            cin >> a[j];
        }

        rep(k, 0, m){
            cin >> b[k];
        }

        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end());

        rep(l, 0, n){
            if(a[l] <= b.front()) break;
            res += lower_bound(b.begin(), b.end(), a[l]) - b.begin();
        }
        
        cout << res << endl;
    }

    return 0;
}