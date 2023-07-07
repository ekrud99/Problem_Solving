#include <iostream>
#include <algorithm>
#include <vector>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define INF 1000000000
using namespace std;
typedef long long ll;

int n, m;
vector<ll> trees;

ll calc(int h){
    ll sum = 0;
    rep(i, 0, n){
        if(trees[i] > h) sum += (trees[i] - h);
    }
    return sum;
}

ll b_search(){
    ll lo = 0;
    ll hi = INF;

    while(lo + 1 < hi){
        ll mid = (lo + hi) / 2;

        if(calc(mid) >= m) lo = mid;
        else hi = mid;
    }
    return lo;
}

int main(void){
    FAST;

    cin >> n >> m;
    rep(i, 0, n){
        ll tree;
        cin >> tree;
        trees.push_back(tree);
    }
    sort(trees.begin(), trees.end());

    cout << b_search();

    return 0;
}