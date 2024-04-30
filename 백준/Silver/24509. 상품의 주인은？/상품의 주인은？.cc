#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

bool cmp(pii p1, pii p2){
    if(p1.first !=  p2.first) return p1.first > p2.first;
    return p1.second < p2.second;
}

int main(void){
    FAST;
    
    int N, n, a, b, c, d;
    vector<pii> A, B, C, D;
    map<int, bool> mp;

    cin >> N;

    rep(i, 0, N){
        cin >> n >> a >> b >> c >> d;
        A.pb(pii(a, n));
        B.pb(pii(b, n));
        C.pb(pii(c, n));
        D.pb(pii(d, n));
    }

    sort(A.begin(), A.end(), cmp); sort(B.begin(), B.end(), cmp); sort(C.begin(), C.end(), cmp); sort(D.begin(), D.end(), cmp);

    cout << A.front().second << " ";
    mp[A.front().second] = true;

    rep(i, 0, N){
        if(mp[B[i].second]) continue;
        else{
            cout << B[i].second << " ";
            mp[B[i].second] = true;
            break;
        }
    }

    rep(i, 0, N){
        if(mp[C[i].second]) continue;
        else{
            cout << C[i].second << " ";
            mp[C[i].second] = true;
            break;
        }
    }

    rep(i, 0, N){
        if(mp[D[i].second]) continue;
        else{
            cout << D[i].second << " ";
            break;
        }
    }

    return 0;
}