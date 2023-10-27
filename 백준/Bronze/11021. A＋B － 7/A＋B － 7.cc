#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int main(void){
    FAST;
    int n, lc, a, b;
    cin >> n;
    lc = n;
    while(n--){
        cin >> a >> b;
        cout << "Case #" << lc - n << ": " << a + b << endl;
    }
    return 0;
}
