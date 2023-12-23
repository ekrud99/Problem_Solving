#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

long long n, m, num;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;
    vector<long long> vec(n + m);

    rep(i, 0, n + m) cin >> vec[i];
    sort(vec.begin(), vec.end());

    for(long long i : vec) cout << i << " ";

    return 0;
}