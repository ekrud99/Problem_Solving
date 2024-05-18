#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    double l, a, b, c, d, k, m, res;
    cin >> l >> a >> b >> c >> d;
    k = ceil(a / c); m = ceil(b / d);
    if(k >= m) cout << l - k;
    else cout << l - m;
    return 0;
}