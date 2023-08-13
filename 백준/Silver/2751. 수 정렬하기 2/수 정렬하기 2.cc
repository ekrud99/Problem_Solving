#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;

    rep(i, 0, n){
        int num;
        cin >> num;
        pq.push(num);
    }

    while (!pq.empty()) {
        int s = pq.top();
        pq.pop();
        cout << s << endl;
    }

    return 0;
}