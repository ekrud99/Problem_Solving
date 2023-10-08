#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, input;
stack<int> stk;
long long res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> input;
        if(!input && !stk.empty()) stk.pop();
        else stk.push(input);
    }

    while(!stk.empty()){
        res += stk.top();
        stk.pop();
    }

    cout << res;

    return 0;
}