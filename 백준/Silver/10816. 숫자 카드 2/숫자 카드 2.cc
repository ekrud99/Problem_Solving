#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
using namespace std;
map<int, int> mp; // 숫자, 횟수
int n, m;
int main(void){
    FAST;

    cin >> n;
    rep(i, 0, n){
        int num;
        cin >> num;
        ++mp[num];
    }

    cin >> m;
    rep(i, 0, m){
        int num;
        cin >> num;
        cout << mp[num] << " ";
    }

    return 0;
}