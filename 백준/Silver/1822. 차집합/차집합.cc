#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, b;
vector<int> A, res;
map<int, bool> B;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;
    A.resize(n);

    rep(i, 0, n){
        cin >> A[i];
    }

    rep(i, 0, m){
        cin >> b;
        B[b] = true;
    }

    rep(i, 0, n){
        if(!B[A[i]]) res.push_back(A[i]);
    }

    sort(res.begin(), res.end());

    cout << res.size() << endl;
    if(res.size() == 0) return 0;
    for(int i : res) cout << i << " ";

    return 0;
}