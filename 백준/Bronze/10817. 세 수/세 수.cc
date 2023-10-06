#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int main(void){
    FAST;
    vector<int> vec;
    rep(i, 0, 3){
        int n;
        cin >> n;
        vec.push_back(n);
    }
    sort(vec.begin(), vec.end());
    cout << vec[1];
    return 0;
}