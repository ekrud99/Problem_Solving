#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<string, string> pss;

int n;
string f, l;
vector<pss> vec;

bool cmp(pss p1, pss p2){
    if(p1.second != p2.second) return p1.second < p2.second;
    return p1.first < p2.first;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> f >> l;
        vec.push_back(pss(f, l));
    }

    sort(vec.begin(), vec.end(), cmp);

    for(pss p: vec) cout << p.first << " " << p.second << endl;

    return 0;
}