#include <bits/stdc++.h>

#define endl "\n" 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std; 
typedef long long ll;
typedef unsigned long long ull;

int t, n, m, p;

int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> t;

    while(t--){
        cin >> n >> m;
        priority_queue<pii> pq;
        queue<pii> q;

        rep(i, 0, n){
            cin >> p;
            pq.push(make_pair(p, i));
            q.push(make_pair(p, i));
        }
        int res = 1;
        while(1){
            if(pq.top().first == q.front().first){
                if(q.front().second == m){
                    cout << res << endl;
                    break;
                }
                // cout << "print out: " << q.front().first << endl;
                pq.pop();
                q.pop();
                ++res;
            }else{
                // cout << "push back: " << q.front().second << endl;
                auto tmp = q.front();
                q.pop();
                q.push(tmp);
            }
        }

    }

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}