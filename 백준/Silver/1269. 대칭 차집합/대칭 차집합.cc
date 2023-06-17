#include <iostream>
#include <algorithm>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n"

using namespace std;

int a, b, cnt, res;
set<int> set_a, set_b;
int main(void){
    FAST;

    cin >> a >> b;
    rep(i, 0, a){
        int n;
        cin >> n;
        set_a.insert(n);
    }

    rep(i, 0, b){
        int n;
        cin >> n;
        set_b.insert(n);
        if(set_a.find(n) != set_a.end()) cnt++;
    }

    res = (set_a.size() + set_b.size()) - 2 * cnt;
    cout << res;

    return 0;
}