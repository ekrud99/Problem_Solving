#include <iostream>
#include <string>
#include <map>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

bool check(vector<string> vec, int len){
    map<string, bool> mp;

    for(string num: vec) {
        string str;
        rep(i, 0, len) str += num[i];
        if(mp[str]) return false;
        mp[str] = true;
    }
    return true;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, res = 7;
    string num;
    vector<string> vec;

    cin >> n;

    while(n--){
        cin >> num;
        reverse(num.begin(), num.end());
        vec.push_back(num);
    }

    rep(i, 1, num.length() + 1){
        if(check(vec, i)){
            res = i;
            break;
        } 
    }

    cout << res;

    return 0;
}