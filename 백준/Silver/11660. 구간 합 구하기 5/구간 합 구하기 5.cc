#include <iostream>
#include <vector>

#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std; // std 클래스에 있는것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;

int n, m;
vector<vector<int>> a, d;
int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> m;

    a.resize(n + 1, vector<int>(n + 1, 0)); 
    d.resize(n + 1, vector<int>(n + 1, 0)); 
    REP(i, 1, n){
        REP(j, 1, n){
            cin >> a[i][j];
            d[i][j] = d[i][j - 1] + d[i - 1][j] - d[i - 1][j - 1] + a[i][j];
        }
    }

    rep(i, 0, m){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int res = d[x2][y2] - d[x1 - 1][y2] - d[x2][y1 - 1] + d[x1 - 1][y1 - 1];
        cout << res << endl;
    }

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}