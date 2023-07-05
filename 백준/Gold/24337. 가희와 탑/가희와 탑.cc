#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int n, a, b;
deque<int> dq, dqq;

int main(void){
    FAST;

    cin >> n >> a >> b;

    int num = a > b ? a : b;

    rep(i, 1, a){
        dq.push_back(i);
    }

    dq.push_back(num);

    rep(i, 1, b){
        dq.push_back(b - i);
    }

    if(dq.size() > n){
        cout << -1;
        return 0;
    }

    if(dq.size() == 1 && num == 1){
        rep(i, 0, n){
            cout << 1 << " ";
        }
        return 0;
    }

    int cnt = 0;

    for(auto i : dq){
        if(cnt == 1){
            rep(i, 0, n - dq.size()){
                cout << 1 << " ";
            }
        }
        cout << i << " ";
        cnt++;
    } 

    for(auto i : dqq) cout << i << " ";

   return 0;
}