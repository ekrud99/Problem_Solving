#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    long long t, n, p, sum = 0, day;

    cin >> t;

    while(t--){
        day = 1;
        sum = 0;
        cin >> n;
        rep(i, 0, 6){
            cin >> p;
            sum += p;
        }
        while(n >= sum){
            sum *= 4;
            ++day;
        }
        cout << day << endl;
    }

    return 0;
}