#include <iostream>
#include <algorithm>
#include <limits>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define MAX numeric_limits<int>::max()

using namespace std;

int n, m, pakage = MAX, each = MAX, mix, pakage_price, each_price, res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;

    rep(i, 0, m){
        cin >> pakage_price >> each_price;
        pakage = min(pakage, pakage_price);
        each = min(each, each_price);
    }

    if(n % 6 == 0) res = min(pakage * (n / 6), each * n);
    else res = min(pakage * (n / 6 + 1), each * n);

    res = min(res, pakage * (n / 6) + each * (n % 6));

    cout << res;

    return 0;
}