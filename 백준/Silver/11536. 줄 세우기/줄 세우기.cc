#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    vector<string> ori(n), inc(n), dec(n);

    rep(i, 0, n) cin >> ori[i];
    inc = ori; dec = ori;
    sort(inc.begin(), inc.end());
    sort(dec.begin(), dec.end(), greater<string>());

    if(ori == inc) cout << "INCREASING";
    else if(ori == dec) cout << "DECREASING";
    else cout << "NEITHER";

    return 0;
}