#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> problem; // score, number
priority_queue<problem> pq;
vector<int> res(5);
int num, ans = 0;

int main(void){
    FAST;

    rep(i, 0, 8){
        cin >> num;
        pq.push(problem(num, i + 1));
    }

    rep(i, 0, 5){
        problem p;
        p = pq.top();
        pq.pop();
        ans += p.first;
        res[i] = p.second;
    }

    cout << ans << endl;

    sort(res.begin(), res.end());
    for(int i: res) cout << i << " ";

    return 0;
}