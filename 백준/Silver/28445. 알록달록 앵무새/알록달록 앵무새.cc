#include <iostream>
#include <vector>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    vector<string> vec(4);
    set<string> child;

    rep(i, 0, 4) cin >> vec[i];

    rep(i, 0, 4){
        string a = vec[i] + " ";
        rep(j, 0, 4){
            string b = vec[j];
            child.insert(a + b);
        }
    }

    for(string str: child) cout << str << endl;

    return 0;
}