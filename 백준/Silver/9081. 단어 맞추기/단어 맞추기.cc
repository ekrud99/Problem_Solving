#include <iostream>
#include <algorithm>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string word;

string next_word(string word){
    string origin = word;
    if(next_permutation(word.begin(), word.end())) return word;
    return origin;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> word;
        cout << next_word(word) << endl;
    }

    return 0;
}