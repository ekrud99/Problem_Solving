#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n";

using namespace std;

string str;
vector<string> lst;

int main(void){
    FAST;

    cin >> str;
    
    rep(i, 0, str.length()){
        lst.push_back(str.substr(i));
    }
    
    sort(lst.begin(), lst.end());

    rep(i, 0, lst.size()){
        cout << lst[i] << endl;
    }

    return 0;
}
