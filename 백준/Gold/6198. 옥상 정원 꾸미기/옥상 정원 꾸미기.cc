#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, h;
long long res;
stack<int> stk;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> h;

    stk.push(h);

    rep(i, 1, n){
        cin >> h;

        while(!stk.empty()){
            int tp = stk.top();
            if(tp <= h) stk.pop();
            else break;
        }

        res += stk.size();
        stk.push(h);
    }

    cout << res;

    return 0;
}