#include <iostream>
#include <queue>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, k;
    queue<int> q;

    cin >> n >> k;

    rep(i, 0, n) q.push(i + 1);

    while(q.size() > 1){
        int fs = q.front(), lc = min(k, (int)q.size());
        rep(i, 0, lc) q.pop();
        q.push(fs);
    }

    cout << q.front();

    return 0;
}