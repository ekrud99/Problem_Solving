#include <iostream>
#include <map>

#define endl "\n" 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std; 
typedef long long ll;
typedef unsigned long long ull;

int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    int n, k;
    map<int, int> mp;
    cin >> n >> k;

    while(n--){
        int a;
        cin >> a;
        mp[a]++;
    }

    for(auto i: mp){
        if(i.second % k != 0){
            cout << i.first;
            return 0;
        }
    }

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}