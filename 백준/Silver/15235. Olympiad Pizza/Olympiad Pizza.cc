#include <iostream>
#include <queue>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pii;

int n, idx = 1;
queue<pii> q;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<int> vec(n);

    rep(i, 0, n){
        int p;
        cin >> p;
        q.push(pii(p, i));
    }

    while(1){
        if(q.size() == 0) break;
        pii tmp = q.front();
        q.pop();
        tmp.first -= 1;
        if(tmp.first == 0){
            vec[tmp.second] = idx;
            ++idx;
            continue;
        }
        q.push(tmp);
        ++idx;
    }

    for(int i: vec) cout << i << " ";

    return 0;
}