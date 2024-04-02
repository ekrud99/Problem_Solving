#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int t, j, n;

    cin >> t;

    while(t--){
        cin >> j >> n;
        vector<int> vec(n);
        rep(i, 0, n){
            int r, c;
            cin >> r >> c;
            vec[i] = r * c;
        }
        sort(vec.begin(), vec.end(), greater<int>());
        int cnt = 0;
        rep(i, 0, n){
            j -= vec[i];
            if(j <= 0){
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}