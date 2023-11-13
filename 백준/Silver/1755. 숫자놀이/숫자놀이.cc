#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int m, n;
vector<pair<string, int>> vec;

string convertString(int num){
    string str = to_string(num), res = "";
    rep(i, 0, str.length()){
        if(str[i] == '1') res += "one";
        else if(str[i] == '2') res += "two";
        else if(str[i] == '3') res += "three";
        else if(str[i] == '4') res += "four";
        else if(str[i] == '5') res += "five";
        else if(str[i] == '6') res += "six";
        else if(str[i] == '7') res += "seven";
        else if(str[i] == '8') res += "eight";
        else if(str[i] == '9') res += "nine";
        else res += "zero";
    }
    return res;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> m >> n;
    rep(i, m, n + 1){
        vec.push_back(make_pair(convertString(i), i));
    } 
    sort(vec.begin(), vec.end());
    rep(i, 0, n - m + 1){
        if(i != 0 && i % 10 == 0) cout << endl;
        cout << vec[i].second << " ";
    }

    return 0;
}