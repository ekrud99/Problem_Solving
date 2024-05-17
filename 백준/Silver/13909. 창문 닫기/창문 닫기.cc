#include <iostream>
using namespace std;
int main(void){
    int n, res = 0;
    cin >> n;
    for(int i = 1; i * i <= n; ++i) ++res;
    cout << res;
    return 0;
}