#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, a;
    map<int, int> mp;

    cin >> n;
    
    while(n--){
        cin >> a;
        mp[a] = 1;
    }

    cout << mp.size();

    return 0;
}