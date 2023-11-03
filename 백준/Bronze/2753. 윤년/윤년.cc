#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int year;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) cout << 1;
    else cout << 0;

    return 0;
}