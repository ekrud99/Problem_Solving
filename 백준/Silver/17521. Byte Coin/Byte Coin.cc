#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    long long n, w, cnt;
    cin >> n >> w;
    vector<long long> vec(n);

    rep(i, 0, n) cin >> vec[i];
    rep(i, 0, n - 1){
        if(vec[i] < vec[i + 1]){
            cnt = w / vec[i];
            w -= cnt * vec[i];
            w += cnt * vec[i + 1];
        }
    }

    cout << w;

    return 0;
}