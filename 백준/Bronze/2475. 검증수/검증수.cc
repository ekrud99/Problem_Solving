#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int num, sum = 0;
    
    rep(i, 0, 5){
        cin >> num;
        num *= num;
        sum += num;
    }

    cout << sum % 10;

    return 0;
}