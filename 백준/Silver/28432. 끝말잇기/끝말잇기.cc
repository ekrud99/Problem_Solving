#include <iostream>
#include <string>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, m;
    string word, pre, cmp = "", res;
    char f = '.', b = '.';
    bool flag = false;
    map<string, bool> mp;

    cin >> n;

    cin >> pre;
    if(pre == "?") flag = true;
    mp[pre] = true;

    rep(i, 1, n){
        cin >> word;
        mp[word] = true;
        if(word == "?"){
            f = pre.back();
            flag = true;
            pre = word;
            continue;
        }
        if(flag){
            b = word.front();
            flag = false;
        }
        pre = word;
    }

    cin >> m;

    rep(i, 0, m){
        cin >> word;
        if(f == '.'){
            if(b == '.') res = word;
            else{
                if(b == word.back() && !mp[word]) res = word;
            }
        }else{
            if(b == '.'){
                if(f == word.front() && !mp[word]) res = word;
            }else{
                if(f == word.front() && b == word.back() && !mp[word]) res = word;
            }
        }
    }

    cout << res;

    return 0;
}