#include <iostream>
#include <vector>
#include <deque>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, c;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    vector<int> ds(n);
    deque<int> dq;

    rep(i, 0, n) cin >> ds[i];
    rep(i, 0, n){
        cin >> c;
        if(!ds[i]) dq.push_back(c);
    } 

    cin >> m;

    rep(i, 0, m){
        cin >> c;
        dq.push_front(c);
        cout << dq.back() << " ";
        dq.pop_back();
    }

    return 0;
}