#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, card;
queue<int> q;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 1, n + 1) q.push(i);

    while(q.size() != 1){
        cout << q.front() << " ";
        if(q.size() > 1) q.pop();
        if(q.size() > 1){
            card = q.front();
            q.pop();
            q.push(card);
        }
    }

    cout << q.front();

    return 0;
}