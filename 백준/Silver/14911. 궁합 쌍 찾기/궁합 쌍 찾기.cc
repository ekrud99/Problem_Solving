#include <iostream>
#include <vector>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    vector<int> vec;
    set<pair<int, int>> st;

    while(cin >> n) vec.push_back(n);
    n = vec.back();

    rep(i, 0, vec.size() - 1){
        rep(j, i + 1, vec.size() - 1){
            if(vec[i] + vec[j] == n) st.insert(make_pair(vec[i], vec[j]));
        }
    }

    for(auto s: st) cout << s.first << " " << s.second << endl;
    cout << st.size();

    return 0;
}