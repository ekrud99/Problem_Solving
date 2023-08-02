#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

map<string, int> mp;

int main(void){
    FAST;
    
    string tree;
    float res, cnt = 0;

    while(getline(cin, tree)){ // eof 입력받을 때 까지
        ++mp[tree];
        ++cnt;
    }

    cout << fixed;
    cout.precision(4);

    for(const auto& t : mp){
        res = (t.second / cnt) * 100;
        cout << t.first << " " << res << endl;
    }

    return 0;
}
