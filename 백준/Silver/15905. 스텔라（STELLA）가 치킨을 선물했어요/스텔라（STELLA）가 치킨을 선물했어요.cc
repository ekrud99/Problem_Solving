#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pii;

bool cmp(pii p1, pii p2){
    if(p1.first != p2.first) return p1.first > p2.first;
    return p1.second < p2.second;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    vector<pii> vec(n);

    rep(i, 0, n){
        int p, s;
        cin >> p >> s;
        vec[i] = pii(p, s);
    }

    sort(vec.begin(), vec.end(), cmp);

    int res = 0, idx = 5;

    while(1){
        if(vec[4].first == vec[idx].first){
            ++res;
            ++idx;
        }
        else break;
    }

    cout << res;

    return 0;
}