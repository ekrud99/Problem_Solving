#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, l;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> l;
    vector<int> fruits(n);

    rep(i, 0, n){
        cin >> fruits[i];
    }

    sort(fruits.begin(), fruits.end());

    rep(i, 0, n){
        if(l >= fruits[i]) ++l;
        else break;
    }

    cout << l;

    return 0;
}