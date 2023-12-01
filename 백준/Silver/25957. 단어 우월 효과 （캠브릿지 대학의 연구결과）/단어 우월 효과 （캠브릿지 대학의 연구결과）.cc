#include <iostream>
#include <algorithm>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string word, s_word;
map<pair<string, string>, string> mp;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    
    rep(i, 0, n){
        cin >> word;
        s_word = word;
        sort(s_word.begin(), s_word.end());
        mp[make_pair(string(1, word[0]) + string(1, word[word.length() - 1]), s_word)] = word;
    }

    cin >> n;

    rep(i, 0, n){
        cin >> word;
        s_word = word;
        sort(s_word.begin(), s_word.end());
        cout << mp[make_pair(string(1, word[0]) + string(1, word[word.length() - 1]), s_word)] << " ";
    }    

    return 0;
}