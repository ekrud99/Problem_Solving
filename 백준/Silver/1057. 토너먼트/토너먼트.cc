#include <iostream>

using namespace std;

int main(void){
    int n, k, l, r = 0;
    cin >> n >> k >> l;
    while(k != l){
        ++r;
        k = (k + 1) / 2;
        l = (l + 1) / 2;
    }
    cout << r;
    return 0;
}