#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, oper, x;
stack<int> stk;

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> oper;
        if(oper == 1){
            cin >> x;
            stk.push(x);
        }else if(oper == 2){
            if(stk.empty()) cout << -1 << endl;
            else{
                cout << stk.top() << endl;
                stk.pop();
            }
        }else if(oper == 3) cout << stk.size() << endl;
        else if(oper == 4) cout << stk.empty() << endl;
        else{
            if(stk.empty()) cout << -1 << endl;
            else cout << stk.top() << endl;
        } 
    }
    return 0;
}