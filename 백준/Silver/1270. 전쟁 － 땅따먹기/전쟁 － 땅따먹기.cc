#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main() {
    FAST;
    
    int n;
    
    cin >> n;
    
    while(n--){
        long long t, mx = -1;
        long long s, res;
        bool flag = false;
        cin >> t;
        map<long long, long long> mp;
        
        rep(i, 0, t){
            
            cin >> s;
            ++mp[s];
            
            if(mp[s] > (t / 2)){
                flag = true;
                res = s;
            }
        }
        if(flag) cout << res << endl;
        else cout << "SYJKGW" << endl;
    }

    return 0;
}
