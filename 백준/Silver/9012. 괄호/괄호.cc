#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int t;

bool is_vps(string s){
    stack<char> stk;
    int lngth = s.length();
    bool flag = true;
    rep(i, 0, lngth){
        char cmp = s[i];
        if(cmp == '(') stk.push('(');
        else{
            if(stk.empty()){
                flag = false;
                //break;
            }else stk.pop();
        }
    }

    if(!stk.empty()) flag = false;

    return flag;
}

int main(void){
    FAST;

    cin >> t;
    string str[t];

    rep(i, 0, t){
        string tmp;
        cin >> tmp;
        str[i] = tmp;
    }

    rep(i, 0, t){
        if(is_vps(str[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }



    return 0;
}