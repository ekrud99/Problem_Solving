#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define INF numeric_limits<int>::max()
#define MIN numeric_limits<int>::min()
#define pb push_back

using namespace std;
int n, m;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    vector<int> dots(n);
    for (int i = 0; i < n; ++i) {
        cin >> dots[i];
    }

    sort(dots.begin(), dots.end());

    for (int i = 0; i < m; ++i) {
        int s, e;
        cin >> s >> e;

        int res_s = lower_bound(dots.begin(), dots.end(), s) - dots.begin();
        int res_e = upper_bound(dots.begin(), dots.end(), e) - dots.begin();
        cout << res_e - res_s << '\n';
    }

    return 0;
}



