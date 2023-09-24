#include <iostream>
#include <algorithm>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int t, n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> t;

    rep(i, 0, t){
        cin >> n;
        long long res = 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        rep(j, 0, n){
            long long c;
            cin >> c;
            pq.push(c);
        }
        
        while(pq.size() != 1){
            long long f1, f2;
            f1 = pq.top();
            pq.pop();
            f2 = pq.top();
            pq.pop();

            res += (f1 + f2);
            pq.push(f1 + f2);
        }
        cout << res << endl;
    }

    return 0;
}