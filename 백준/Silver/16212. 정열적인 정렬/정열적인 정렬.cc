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

    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());
    for(int i : vec) cout << i << " ";


    return 0;
}