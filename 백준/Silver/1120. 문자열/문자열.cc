#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string str1, str2;

void input(){
    cin >> str1 >> str2;
}

void solve(){
    int cnt, res = 51;
    rep(i, 0, str2.length() - str1.length() + 1){
        cnt = 0;
        rep(j, 0, str1.length()){
            if(str1[j] != str2[i + j]) ++cnt;
        }
        res = res > cnt ? cnt : res;
    }
    cout << res;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);
    input();
    solve();

    return 0;
}