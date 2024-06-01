#include <iostream>
using namespace std;
int main(void){
    string n;
    int a, w;
    while(1){
        cin >> n >> a >> w;
        if(n == "#") break;
        if(a > 17 || w >= 80) cout << n << " Senior\n";
        else cout << n << " Junior\n";
    }
    return 0;
}