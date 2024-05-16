#include <iostream>
#include <map>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(void){
    FAST;
    
    int n, g;
    cin >> n;

    rep(i, 0, n){
        cin >> g;
        int mod = 1;
        vector<int> vec(g);
        rep(j, 0, g) cin >> vec[j];
        while(1){
            map<int, bool> mp;
            bool flag = true;
            rep(j, 0, g){
                if(mp[vec[j] % mod]){
                    flag = false;
                    ++mod;
                    break;
                }
                mp[vec[j] % mod] = true;
            }  
            if(flag){
                cout << mod << endl;
                break;
            }    
        }
    }

    return 0;
}
