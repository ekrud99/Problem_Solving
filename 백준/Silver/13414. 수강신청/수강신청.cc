#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int k, l, lc;
string id;
map<string, int> mp;
vector<pair<int, string>> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> k >> l;

    rep(i, 0, l){
        cin >> id;
        mp[id] = i; 
    }

    for(auto id : mp) vec.push_back(make_pair(id.second, id.first));
    sort(vec.begin(), vec.end());

    lc = min(k, static_cast<int>(vec.size()));

    rep(i, 0, lc) cout << vec[i].second << endl;

    return 0;
}