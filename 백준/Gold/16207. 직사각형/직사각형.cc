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

ll n, res, cnt = 2, cur = 1;

int main(){
    FAST;

    cin >> n;
    vector<int> lines(n);

    rep(i, 0, n){
        cin >> lines[i];
    }

    sort(all(lines), greater<int>());

    int pre_line = lines[0];

    rep(i, 1, n){
        int line = lines[i];
        bool flag = false;
        // cout << "i: " << i << " pre_line: " << pre_line << " line: " << line << endl; 

        if(pre_line == line){
            cur *= line;
            --cnt;
            ++i;
            pre_line = lines[i];
            flag = true;
        }else if(pre_line - 1 == line){
            cur *= line;
            --cnt;
            ++i;
            pre_line = lines[i];
            flag = true;
        } // 5 4 3 2
        // 6 6 5 4 4 3
        // cout << "cur: " << cur << " res: " << res << endl;

        if(!flag) pre_line = line;

        if(!cnt){
            res += cur;
            cur = 1;
            cnt = 2;
        } 

    }
    // 10 6 6 6 5 4 4 4 3

    cout << res;

    return 0;
}