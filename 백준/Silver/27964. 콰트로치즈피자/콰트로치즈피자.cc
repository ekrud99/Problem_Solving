#include <iostream>
#include <string>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    int n;
    string cheese;
    set<string> cheeses;

    cin >> n;

    rep(i, 0, n){
        string origin;
        cin >> cheese;
        origin = cheese;
        if(cheese.length() < 6) continue;
        else cheese = cheese.substr(cheese.length() - 6, 6);
        if(cheese != "Cheese") continue;
        
        cheeses.insert(origin);
    }
    
    if(cheeses.size() >= 4) cout << "yummy";
    else cout << "sad";

    return 0;
}