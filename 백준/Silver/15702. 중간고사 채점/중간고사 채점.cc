#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, num;
typedef pair<int, int> pii;

bool cmp(pii p1, pii p2){
    if(p1.first != p2.first) return p1.first > p2.first;
    return p1.second < p2.second;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;
    vector<int> vec(n);
    vector<pii> score(m);

    rep(i, 0, n) cin >> vec[i];

    rep(i, 0, m){
        cin >> num;
        score[i].second = num;
        rep(j, 0, n){
            char ox;
            bool flag;
            cin >> ox;
            if(ox == 'O') flag = true;
            else flag = false;
            if(flag) score[i].first += vec[j];
        }
    }

    sort(score.begin(), score.end(), cmp);

    cout << score.front().second << " " << score.front().first;

    return 0;
}