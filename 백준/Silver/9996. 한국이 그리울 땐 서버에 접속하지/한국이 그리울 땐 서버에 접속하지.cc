#include <iostream>
#include <regex>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string str, f, b, org;
bool flag = true;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> str;

    rep(i, 0, str.length()){
        if(str[i] == '*'){
            flag = false;
            continue;
        }
        if(flag) f += str[i];
        else b += str[i];
    }

    regex ptrn(f + ".*" + b + "$");

    rep(i, 0, n){
        cin >> org;
        if(regex_match(org, ptrn)) cout << "DA" << endl;
        else cout << "NE" << endl;
    }

    return 0;
}