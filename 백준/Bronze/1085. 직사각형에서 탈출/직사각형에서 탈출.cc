#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int x, y, w, h, ver, hor;

int main(void){
    FAST;

    cin >> x >> y >> w >> h;

    ver = (x - 0) < (w - x) ? x - 0 : w - x;
    hor = (y - 0) < (h - y) ? y - 0 : h - y;

    if(ver <= hor) cout << ver;
    else cout << hor;

    return 0;
}