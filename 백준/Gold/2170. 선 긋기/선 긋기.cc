#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
long long res, ep;
typedef pair<int, int> pii;
vector<pii> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        int s, e;
        cin >> s >> e;
        vec.push_back(pii(s, e));
    }

    sort(vec.begin(), vec.end());

    res = vec[0].second - vec[0].first;
    ep = vec[0].second;

    rep(i, 1, n){
        if(vec[i].first >= ep){
            res += vec[i].second - vec[i].first;
            ep = vec[i].second;
        } 
        else if(vec[i].second < ep) continue;
        else{
            res += vec[i].second - ep;
            ep = max(vec[i].second, vec[i - 1].second);
        } 
    }

    cout << res;

    return 0;
}