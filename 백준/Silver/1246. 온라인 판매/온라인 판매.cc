#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n,  m, price, profit = -1;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;
    vector<int> vec(m);

    rep(i, 0, m) cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<>());

    rep(i, 1, m + 1){
        if(i > n) break;
        if(profit < i * vec[i - 1]){
            price = vec[i - 1];
            profit = i * price;
        }
    }

    cout << price << " " << profit;

    return 0;
}