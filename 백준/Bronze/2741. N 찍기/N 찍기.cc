#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int main(void){
    FAST;
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cout << i << endl;
    }
    return 0;
}