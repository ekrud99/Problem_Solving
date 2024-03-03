#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, x, num;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> x;

    while(n--){
        cin >> num;
        if(x > num) cout << num << " ";
    }

    return 0;
}