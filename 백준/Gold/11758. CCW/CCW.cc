#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int x1, x2, x3, y1, y2, y3, ccw;
int main(void){
    FAST;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ccw = (x1 * y2 + x2 * y3 + x3 * y1) - (x2 * y1 + x3 * y2 + x1 * y3);
    if(ccw < 0) cout << -1;
    else if(ccw > 0) cout << 1;
    else cout << 0;

    return 0;
}