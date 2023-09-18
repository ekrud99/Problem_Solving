#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
typedef pair<int, int> mpos;
vector<mpos> vec, res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    vec.push_back(mpos(0, 0));

    rep(i, 0, n){
        int b;
        cin >> b;
        vec.push_back(mpos(i + 1, b)); 
    }

    vec.push_back(mpos(n + 1, 0));

    rep(i, 1, n + 1){
        if(vec[i].second >= vec[i - 1].second && vec[i].second >= vec[i + 1].second) res.push_back(vec[i]);
    }

    sort(res.begin(), res.end());

    for(auto i : res) cout << i.first << endl;

    return 0;
}
