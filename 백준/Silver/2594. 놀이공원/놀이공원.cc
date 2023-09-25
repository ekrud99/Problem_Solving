#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, s, e, res = -1;

int calc(int m){
    int sum = m % 100;
    sum += 60 * (m / 100);
    return sum;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<pair<int, int>> vec;

    rep(i, 0, n){
        cin >> s >> e;
        vec.push_back(make_pair(s, e));
    }

    sort(vec.begin(), vec.end());

    int f = vec.front().first;
    int r = vec.front().second;

    if(f > 1000) res = calc(f) - 10 - calc(1000);

    rep(i, 1, n){
        if(vec[i].first <= r){
            r = max(vec[i].second, r);

            continue;
        }else{
            res = max((calc(vec[i].first) - 10) - (calc(r) + 10), res);
            r = max(vec[i].second, r);  
        }
    }

    res = max((calc(2200) - (calc(r) + 10)), res);

    cout << res;

    return 0;
}