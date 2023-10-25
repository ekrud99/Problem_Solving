#include <iostream>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res;
string input;
set<string> user;

int main(void){
    FAST;

    cin >> n;

    while(n--){
        cin >> input;
        if(input == "ENTER"){
            res += user.size();
            user.clear();
            continue;  
        }
        user.insert(input);
    }
    res += user.size();
    cout << res;

    return 0;
}