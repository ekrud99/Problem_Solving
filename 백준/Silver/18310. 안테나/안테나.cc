#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;
    int n;
    cin >> n;
    vector<int> house(n);
    rep(i, 0, n) cin >> house[i];
    sort(house.begin(), house.end());
    cout << house[(house.size() - 1) / 2];
    return 0;
}