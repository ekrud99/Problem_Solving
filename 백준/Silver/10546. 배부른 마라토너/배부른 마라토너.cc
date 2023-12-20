#include <iostream>
#include <map>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string name;
map<string, int> p;
vector<string> res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    while(cin >> name) ++p[name];
    for(auto name : p) if(name.second % 2 != 0) cout << name.first << endl;

    return 0;
}