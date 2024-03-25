#include <iostream>
#include <stack>
#include <string>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
using namespace std;

bool check(string str){
    stack<char> stk;
    bool flag = true;
    
    rep(i, 0, str.length()){
        if(str[i] == '(' || str[i] == '[') stk.push(str[i]);
        else if(str[i] == ')'){
            if(!stk.empty() && stk.top() == '('){
                stk.pop();
            }
            else{
                flag = false;
                break;
            }
        }
        else if(str[i] == ']'){
            if(!stk.empty() && stk.top() == '['){
                stk.pop();
            }
            else{
                flag = false;
                break;
            }
        }
    }
    if(flag && stk.empty()) return true;
    else return false;
}

int main() {
    FAST;
    
    while(1){
        string str;
        getline(cin, str);
        if(str == ".") break;
        if(check(str)) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}