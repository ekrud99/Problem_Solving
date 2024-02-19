#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, string> pis;

bool cmp(pis p1, pis p2){
    return p1.first > p2.first;
}

int n, m, k, score, mi, mx, cnt = 0;
string lec;
map<string, int> mp;
vector<pis> lo, hi;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m >> k;

    rep(i, 0, n){
        cin >> lec >> score;
        lo.push_back(pis(score, lec));
        hi.push_back(pis(score, lec));
        mp[lec] = score;
    }

    rep(i, 0, k){
        cin >> lec;
        mi += mp[lec];
        mx += mp[lec];
        mp[lec] = -1;
    }

    sort(hi.begin(), hi.end(), cmp);
    sort(lo.begin(), lo.end());

    for(auto i: lo){
        if(cnt >= m - k) break;
        if(mp[i.second] == -1) continue;
        mi += i.first;
        ++cnt;
    }

    cnt = 0;

    for(auto i: hi){
        if(cnt >= m - k) break;
        if(mp[i.second] == -1) continue;
        mx += i.first;
        ++cnt;
    }

    cout << mi << " " << mx;    

    return 0;
}