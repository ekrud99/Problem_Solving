#include <iostream>
#include <queue>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, rnk;
long long res;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> rnk;
        pq.push(rnk);
    }

    rep(i, 1, n + 1){
        int t = pq.top();
        pq.pop();
        res += abs(i - t);
    }

    cout << res;

    return 0;
}