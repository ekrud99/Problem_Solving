#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, cnt;

bool check(int num){
    string str = to_string(num), res = "";
    rep(i, 0, str.length()){
        if(str[i] == '2' && (res == "" || res == "20")) res += '2';
        else if(str[i] == '0' && res == "2") res += '0';
        else if(str[i] == '3' && res == "202") res += '3';
        if(res == "2023") return true;
    }
    return false;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    if(n < 2023){
        cout << 0;
        return 0;
    }

    rep(i, 2023, n + 1){
        if(check(i)){
            ++cnt;
        } 
    }

    cout << cnt;

    return 0;
}