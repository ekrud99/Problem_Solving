#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, m, b, k;
    bool flag = true;

    cin >> n >> m;

    rep(i, 0, m){
        cin >> k;
        vector<int> vec;
        rep(j, 0, k){
            cin >> b;
            vec.push_back(b);
        }
        vector<int> sorted = vec;
        sort(sorted.begin(), sorted.end());
        reverse(vec.begin(), vec.end());
        if(sorted != vec){
            flag = false;
        }
    }

    if(flag) cout << "Yes";
    else cout << "No";

    return 0;
}