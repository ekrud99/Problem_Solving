#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
    long long a, b, c, total, price;
    
    cin >> a >> b >> c;
    
    if(b >= c){
        cout << -1;
        return 0;
    }
    
    cout << a / (c - b) + 1;

    return 0;
}