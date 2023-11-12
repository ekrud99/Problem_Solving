#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int a, b;
int main(void){
    FAST;
    while(cin >> a >> b) cout << a + b << endl;
    return 0;
}