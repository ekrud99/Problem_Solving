#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int main(void){
    FAST;
    
    long long n, m;

    cin >> n >> m;

    if(n == m) cout << true;
    else cout << false;

    return 0;
}