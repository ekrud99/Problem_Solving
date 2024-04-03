#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pii;
map<int, int> mp; 
vector<pii> vec;

bool cmp(pii p1, pii p2){
    return p1.second < p2.second;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int r, c, cnt = 1;

    cin >> r >> c;
    vector<int> res(51), ans(51);

    rep(i, 0, r){
        string str;
        cin >> str;
        rep(j, 1, c - 1){
            char team = str[str.length() - 1 - j];
            if(team != '.'){
                vec.push_back(pii(team - '0', j));
                break;
            }
        }
    }

    sort(vec.begin(), vec.end(), cmp);

    ans[vec[0].first] = cnt;

    rep(i, 1, 10){
        ++cnt;
        if(vec[i].second == vec[i - 1].second) --cnt;
        ans[vec[i].first] = cnt;
    }

    rep(i, 1, 10) cout << ans[i] << endl;
    return 0;
}