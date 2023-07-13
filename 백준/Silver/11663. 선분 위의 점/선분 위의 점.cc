#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
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
