#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<string, string> pss;

bool cmp(pss p1, pss p2){
    if(p1.first != p2.first) return p1.first < p2.first;
    return p1.second > p2.second;
}

int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<pss> vec(n);

    rep(i, 0, n){
        string str1, str2;
        cin >> str1 >> str2;
        vec[i] = pss(str1, str2);
    }

    sort(vec.begin(), vec.end(), cmp);

    for(pss p: vec) cout << p.first << " " << p.second << endl;

    return 0;
}