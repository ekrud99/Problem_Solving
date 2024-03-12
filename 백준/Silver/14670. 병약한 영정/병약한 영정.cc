#include <iostream>
#include <map>
#include <vector>

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

    int n, r, cnt, medicine, symptom, effect;
    map<int, int> mp;
    map<int, bool> check;

    cin >> n;

    rep(i, 0, n){
        cin >> effect >> medicine;
        mp[effect] = medicine;
        check[effect] = true;
    }

    cin >> r;

    rep(i, 0, r){
        cin >> cnt;
        vector<int> vec;
        bool flag = true;
        rep(j, 0, cnt){
            cin >> symptom;
            if(!check[symptom]) flag = false;
            else vec.pb(mp[symptom]);
        }
        if(flag){
            for(int i: vec) cout << i << " ";
        }
        else cout << "YOU DIED";
        cout << endl;
    }

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}