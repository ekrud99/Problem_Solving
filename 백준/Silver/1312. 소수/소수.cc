#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int a, b, n, res;
    
    cin >> a >> b >> n;
    
    for(int i = 0; i < n + 1; ++i){
        res = a / b;
        a = a % b * 10;
    }
    
    cout << res;

    return 0;
}