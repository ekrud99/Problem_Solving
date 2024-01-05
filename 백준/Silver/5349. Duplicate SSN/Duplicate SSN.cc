#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string ssn;
map<string, bool> mp;
set<string> s;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(cin >> ssn){
        if(mp[ssn]) s.insert(ssn);
        else mp[ssn] = true;
    }

    for(string s: s) cout << s << endl;

    return 0;
}