#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

bool compare(string word1, string word2){
    if(word1.length() < word2.length()) return true;
    else if(word1.length() > word2.length()) return false;
    return word1 < word2;
}

int n;
string word;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<string> words;
    unordered_map<string, bool> check;

    rep(i, 0, n){
        cin >> word; 
        if(check[word]) continue;
        check[word] = true;
        words.push_back(word);
    } 
    sort(words.begin(), words.end(), compare);
    for(string word : words) cout << word << endl;

    return 0;
}