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

int n, cnt = 2;
ll res, cur = 1;

int main(){
    FAST;

#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n;
    vector<int> lines(n);

    rep(i, 0, n){
        cin >> lines[i];
    }

    sort(all(lines), greater<int>());

    int pre_line = lines[0];

    rep(i, 1, n){
        int line = lines[i];

        if(pre_line - line <= 1){
            cur *= line;
            --cnt;
            ++i;
            pre_line = lines[i];
        }
        else pre_line = line;

        if(!cnt){
            res += cur;
            cur = 1;
            cnt = 2;
        } 
    }

    cout << res;

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
#endif

    return 0;
}