#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    long long n, m, total, sum = 0;
    cin >> n;
    vector<long long> vec(n);

    total = n * (n - 1) / 2;

    rep(i, 0, n){
        long long num;
        cin >> num;
        sum += num;
    }

    cout << sum - total;

    return 0;
}