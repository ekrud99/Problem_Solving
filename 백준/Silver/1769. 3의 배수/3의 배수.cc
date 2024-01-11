#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string num;
int cnt = 0;

string calc(string str){
    int res = 0;
    rep(i, 0, str.length()){
        res += (str[i] - '0');
    }
    return to_string(res);
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> num;

    while(num.length() > 1){
        ++cnt;
        num = calc(num);

    }

    cout << cnt << endl;
    if(stoi(num) % 3 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}