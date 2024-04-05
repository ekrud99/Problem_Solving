#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, double> pii;
vector<pii> vec;
int n, w, h;

bool cmp(pii p1, pii p2){
    if(p1.second != p2.second) return p1.second > p2.second;
    return p1.first < p2.first;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vec.resize(n);

    rep(i, 0 ,n){
        cin >> w >> h;
        vec[i] = pii(i + 1, sqrt((w * w) + (h * h)) / 77);
    }

    sort(vec.begin(), vec.end(), cmp);

    for(pii p: vec) cout << p.first << endl;

    return 0;
}