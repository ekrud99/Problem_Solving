#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

map<int, int> mp;

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    rep(i, 0, n){
        int num;
        cin >> num;
        ++mp[num];
    }

    for(auto i : mp){
        rep(j, 0, i.second) cout << i.first << endl;
    }

    return 0;
}