#include <bits/stdc++.h>

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

int b_search(int t, vector<int>& vec){
    int low = 0;
    int high = vec.size() - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(vec[mid] == t) return 1;
        else if(vec[mid] > t) high = mid - 1;
        else low = mid + 1;
    }
    return 0;
}

int n, m;
vector<int> vec;
int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n;
    rep(i, 0, n){
        int num;
        cin >> num;
        vec.pb(num);
    }

    sort(vec.begin(), vec.end());

    cin >> m;
    rep(i, 0, m){
        int t;
        cin >> t;
        if(b_search(t, vec)) cout << 1;
        else cout << 0;
        cout << endl;
    }

    return 0;

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif
    return 0;
}