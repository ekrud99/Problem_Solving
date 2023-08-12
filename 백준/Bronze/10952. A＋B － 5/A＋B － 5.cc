#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int main(void){
    FAST;
    int a, b;
    while(1){
        cin >> a >> b;
        if(a == 0) return 0;
        cout << a + b << endl;
    }
    return 0;
}