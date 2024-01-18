#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string str;

bool check(string str){
    stack<char> s;
    rep(i, 0, str.length()){
        char c = str[i];
        if(c == '(' || c == '{' || c == '[') s.push(c);
        else if(c == ')'){
            if(s.empty()) return false;
            if(s.top() == '('){
                s.pop();
            }
            else return false;
        }
        else if(c == '}'){
            if(s.empty()) return false;
            if(s.top() == '{'){
                s.pop();
            }
            else return false;
        }
        else if(c == ']'){
            if(s.empty()) return false;
            if(s.top() == '['){
                s.pop();
            }
            else return false;
        }
    }
    if(s.empty()) return true;
    else return false;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(1){
        getline(cin, str);
        if(str == "#") break;
        if(check(str)) cout << "Legal" << endl;
        else cout << "Illegal" << endl;
    }

    return 0;
}