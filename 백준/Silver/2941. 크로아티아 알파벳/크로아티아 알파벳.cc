#include <iostream>
#include <string>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    string str;
    int res = 0, idx;
    vector<string> alpha = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    cin >> str;

    rep(i, 0, 8){
        while(true){
            idx = str.find(alpha[i]);
            if(idx == string::npos) break;
            str.replace(idx, alpha[i].length(), ".");
        }
    }

    cout << str.length();

    return 0;
}