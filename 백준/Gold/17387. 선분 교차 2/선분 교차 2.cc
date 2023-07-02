#include <iostream>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
typedef long long ll;
ll x1, x2, x3, x4, y1, y2, y3, y4;

int calc_ccw(ll x1, ll x2, ll x3, ll y1, ll y2, ll y3){
    ll res = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
    if(res > 0) return 1;
    else if(res < 0) return -1;
    else return 0;
}

bool is_over(ll x1, ll x2, ll x3, ll x4, ll y1, ll y2, ll y3, ll y4){
    if(min(x1, x2) <= max(x3, x4) && min(x3, x4) <= max(x1, x2) && min(y1, y2) <= max(y3, y4) && min(y3, y4) <= max(y1, y2)) return true;
    return false;
}

bool is_cross(ll x1, ll x2, ll x3, ll x4, ll y1, ll y2, ll y3, ll y4){
    int abc = calc_ccw(x1, x2, x3, y1, y2, y3);
    int abd = calc_ccw(x1, x2, x4, y1, y2, y4);
    int cda = calc_ccw(x3, x4, x1, y3, y4, y1);
    int cdb = calc_ccw(x3, x4, x2, y3, y4, y2);
    if(abc * abd == 0 && cda * cdb == 0) return is_over(x1, x2, x3, x4, y1, y2, y3, y4);
    else if(abc * abd <= 0 && cda * cdb <= 0) return true;
    return false;
}

int main(void){
    FAST;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    bool crs = is_cross(x1, x2, x3, x4, y1, y2, y3, y4);

    if(crs) cout << 1;
    else cout << 0;

    return 0;
}