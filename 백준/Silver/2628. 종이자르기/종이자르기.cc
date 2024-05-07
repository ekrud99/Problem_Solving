#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int R, C, p, n, flag, rmax, cmax;
    vector<int> row, col;

    cin >> C >> R >> n;

    rep(i, 0, n){
        cin >> flag >> p;
        if(!flag) row.push_back(p);
        else col.push_back(p);
    }

    sort(row.begin(), row.end());
    sort(col.begin(), col.end());

    if(row.empty()) rmax = R;
    else rmax = row.front();

    if(col.empty()) cmax = C;
    else cmax = col.front();

    rep(i, 1, row.size()) rmax = max(rmax, row[i] - row[i - 1]);
    rep(i, 1, col.size()) cmax = max(cmax, col[i] - col[i - 1]);

    if(!row.empty()) rmax = max(rmax, R - row.back());
    if(!col.empty()) cmax = max(cmax, C - col.back());

    cout << rmax * cmax;

    return 0;
}