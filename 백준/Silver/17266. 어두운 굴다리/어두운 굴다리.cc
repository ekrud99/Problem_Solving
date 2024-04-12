#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

bool check(int n, int h, vector<int> vec){
    int sum = 0, s, e;
    
    s = vec.front() - h < 0 ? 0 : vec.front() - h;
    e = vec.front() + h > n ? n : vec.front() + h;
    sum += (e - s);
    
    rep(i, 1, vec.size()){
        s = vec[i] - h < e ? e : vec[i] - h;
        e = vec[i] + h > n ? n : vec[i] + h;
        sum += (e - s);
    }
    if(sum != n) return false;
    return true;
}

int main(void){
    FAST;
    
    int n, m;
    cin >> n >> m;
    vector<int> vec(m);

    rep(i, 0, m) cin >> vec[i];

    int lo = -1, hi = n + 1, mid;

    while(lo + 1 < hi){
        mid = (lo + hi) / 2;
        if(check(n, mid, vec)) hi = mid;
        else lo = mid;
    }

    cout << hi;

    return 0;
}
