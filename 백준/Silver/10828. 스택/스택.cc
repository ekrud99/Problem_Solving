#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, x, top;
string oper;
stack<int> stk;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> oper;
        if(oper == "push"){
            cin >> x;
            stk.push(x);
        }
        else if(oper == "pop"){
            if(stk.empty()) cout << -1 << endl;
            else{
                cout << stk.top() << endl;
                stk.pop();
            }
        }
        else if(oper == "size") cout << stk.size() << endl;
        else if(oper == "empty") cout << stk.empty() << endl;
        else{
            if(stk.empty()) cout << -1 << endl;
            else cout << stk.top() << endl;
        }
    }

    return 0;
}