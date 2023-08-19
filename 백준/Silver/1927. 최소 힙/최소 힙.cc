#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;
typedef long long ll;

int n;
priority_queue<ll, vector<ll>, greater<ll>> pq;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        ll num;
        cin >> num;
        if(num == 0){
            if(pq.empty()) cout << 0 << endl;
            else{
                cout << pq.top() << endl;
                pq.pop();
            }
        }else{
            pq.push(num);
        }
    }

    return 0;
}