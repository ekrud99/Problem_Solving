#include <iostream>
#include <map>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(void){
    FAST;
    
    string str;
    bool uniq = true;
    int mx = -1;
    char res;
    map<char, int> mp;
    cin >> str;

    rep(i, 0, str.length()){
        char c = toupper(str[i]);
        ++mp[c];
        if(mx == mp[c]) uniq = false;
        else if(mx < mp[c]){
            mx = mp[c];
            res = c;
            uniq = true;
        } 
    }

    if(uniq) cout << res;
    else cout << "?";

    return 0;
}
