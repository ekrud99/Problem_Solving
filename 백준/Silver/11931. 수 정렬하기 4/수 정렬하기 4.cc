#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
vector<int> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vec.resize(n);

    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end(), greater<int>());
    for(int i : vec) cout << i << endl;
    
    return 0;
}