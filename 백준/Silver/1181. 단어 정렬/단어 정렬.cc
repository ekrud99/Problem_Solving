#include <iostream>
#include <set>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

struct compare{
    bool operator()(const string& a, const string& b)const{
        if(a.length() < b.length()) return true;
        else if(a.length() > b.length()) return false;
        return a < b;
    }
};

int n;
string word;
set<string, compare> s;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> word; 
        s.insert(word);
    } 

    for(string word: s) cout << word << endl;

    return 0;
}