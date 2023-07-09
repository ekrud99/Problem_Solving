#include <iostream>
#include <string>
#include <vector>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; i++)
using namespace std;
int n;
string ans = "";
vector<string> vec;
bool is_same(char c1, char c2, char c3){
    return c1 == c2 && c2 == c3;
}
int main(void){
    FAST;
    
    cin >> n;

    rep(i, 0, n){
        string str;
        cin >> str;
        vec.push_back(str);
    }

    rep(i, 0, vec[0].size()){
        char c = vec[0][i];
        bool flag = true;
        rep(j, 1, n){
            if(c != vec[j][i]) flag = false;
            c = vec[j][i];
        }
        if(!flag) ans += '?';
        else ans += c;
    }

    cout << ans;

    return 0;
}