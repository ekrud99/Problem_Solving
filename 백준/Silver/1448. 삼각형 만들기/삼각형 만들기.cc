#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<int> straws(n);

    rep(i, 0, n) cin >> straws[i];
    sort(straws.begin(), straws.end(), greater<int>());

    rep(i, 0, n - 2){
        if(straws[i] >= straws[i + 1] + straws[i + 2]) continue;
        else{
            cout << straws[i] + straws[i + 1] + straws[i + 2];
            return 0;
        } 
    }

    cout << -1;

    return 0;
}