#include <iostream>
#include <vector>
#include <cctype>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string var, tmp = "", res = "";
vector<string> vec;

bool is_error(string var){
    if(var.front() == '_' || var.back() == '_' || isupper(var.front())) return true;

    bool has_underbar = false, has_cap = false;
    char pre = var.front();

    rep(i, 1, var.length()){
        if(pre == '_') has_underbar = true;
        if(isupper(pre)) has_cap = true;

        if(has_underbar && has_cap) return true;
        if(pre == '_' && var[i] == '_') return true;
        pre = var[i];
    }
    if(pre == '_') has_underbar = true;
    if(isupper(pre)) has_cap = true;

    if(has_underbar && has_cap) return true;
    return false;
}

bool is_c_var(string var){
    rep(i, 0, var.length()) if(var[i] == '_') return true;
    return false;
}

string make_c_to_java(string var){
    rep(i, 0, var.length()){
        if(var[i] == '_'){
            vec.push_back(tmp);
            tmp = "";
        } 
        else tmp += var[i];
    }

    vec.push_back(tmp);

    res += vec.front();

    rep(i, 1, vec.size()){
        vec[i][0] -= 32;
        res += vec[i];
    }

    return res;
}

string make_java_to_c(string var){
    rep(i, 0, var.length()){
        if(islower(var[i])) res += var[i];
        else{
            res += '_';
            res += (var[i] + 32);
        } 
    }
    return res;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> var;

    if(is_error(var)){
        cout << "Error!";
        return 0;
    }

    if(is_c_var(var)) res = make_c_to_java(var);
    else make_java_to_c(var);

    cout << res;

    return 0;
}