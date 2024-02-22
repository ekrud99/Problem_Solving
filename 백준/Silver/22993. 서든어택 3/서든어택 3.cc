#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

long long n, p;
bool flag = false;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<long long> vec(n - 1);

    cin >> p;

    rep(i, 0, n - 1) cin >> vec[i];

    sort(vec.begin(), vec.end());

    rep(i, 0, n - 1){
        if(p > vec[i]) p += vec[i];
        else{
            flag = true;
            break;
        }
    }

    if(flag) cout << "No";
    else cout << "Yes";

    return 0;
}