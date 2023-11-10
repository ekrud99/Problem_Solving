#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int convertNext(int num){
    int res = num;
    string str = to_string(num);
    rep(i, 0, str.length()){
        res += str[i] - '0';
    }
    return res;
}

int n = 10000, num;
map<int, bool> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(n){
        mp[convertNext(n)] = true;
        --n;
    }

    rep(i, 1, 10000) if(!mp[i]) cout << i << endl;

    return 0;
}