#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, string> pis;

int n, m, c;
string name;
vector<pis> even, odd;
map<int, int> mp;

bool cmp(pis p1, pis p2){
    if(p1.first != p2.first) return p1.first < p2.first;
    else if(p1.second.length() != p2.second.length()) return p1.second.length() < p2.second.length();
    else return p1.second < p2.second;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;

    while(1){
        cin >> c >> name;
        ++mp[c];
        if(mp[c] > m) continue;
        if(c == 0) break;
        if(c % 2 == 0) even.push_back(pis(c, name));
        else odd.push_back(pis(c, name));
    }

    sort(even.begin(), even.end(), cmp);
    sort(odd.begin(), odd.end(), cmp);

    for(pis p: odd) cout << p.first << " " << p.second << endl;
    for(pis p: even) cout << p.first << " " << p.second << endl;

    return 0;
}