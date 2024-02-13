#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, a, p;
priority_queue<int> pq;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> a;

        if(a == 0){
            if(!pq.empty()){
                cout << pq.top() << endl;
                pq.pop();
            } else {
                cout << -1 << endl;
            }
        }
        else {
            rep(i, 0, a){
                cin >> p;
                pq.push(p);
            }
        }
    }

    return 0;
}