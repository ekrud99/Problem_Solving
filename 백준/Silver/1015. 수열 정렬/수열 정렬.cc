#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pii;
int n, num;
vector<pii> A;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<int> P(n);

    rep(i, 0, n){
        cin >> num;
        A.push_back(pii(num, i));
    }

    sort(A.begin(), A.end());

    rep(i, 0, n) P[A[i].second] = i;

    for(auto p : P) cout << p << " ";

    return 0;
}