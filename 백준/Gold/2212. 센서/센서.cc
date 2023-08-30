#include <iostream>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, k, res;
vector<int> sensors;
vector<int> dist;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> k;
    sensors.resize(n);

    rep(i, 0, n){
        cin >> sensors[i];
    }

    sort(sensors.begin(), sensors.end());

    int piv = sensors[0];

    rep(i, 1, n){
        dist.push_back(sensors[i] - piv);
        piv = sensors[i];
    }

    sort(dist.begin(), dist.end());

    rep(i, 0, n - (k - 1) - 1) res += dist[i];

    cout << res;

    return 0;
}