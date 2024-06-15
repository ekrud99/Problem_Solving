#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    
    if(a != b && b != c && c != a){
        int mx = max(a, b);
        mx = max(mx, c);
        cout << mx * 100;
    }else if(a == b && b == c && a == c){
        cout << 10000 + a * 1000;
    }else{
        if(a == b || a == c) cout << 1000 + a * 100;
        else cout  << 1000 + b * 100;
    }
    
    return 0;
}
