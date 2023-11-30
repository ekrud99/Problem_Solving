#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int k, n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> k;

    rep(i, 1, k + 1){
        int mx = -1;
        cin >> n;
        vector<int> score(n);
        rep(j, 0, n) cin >> score[j];
        sort(score.begin(), score.end());
        rep(k, 1, n) mx = max(mx, score[k] - score[k - 1]);
        cout << "Class " << i << endl << "Max " << score[n - 1] << ", Min " << score[0] << ", Largest gap " << mx << endl;
    }

    return 0;
}