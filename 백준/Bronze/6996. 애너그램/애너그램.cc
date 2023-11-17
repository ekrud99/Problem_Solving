#include <iostream>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string str1, str2, sstr1, sstr2;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> str1 >> str2;
        sstr1 = str1;
        sstr2 = str2;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        if(str1 == str2) cout << sstr1 << " & " << sstr2 << " are anagrams." << endl;
        else cout << sstr1 << " & " << sstr2 << " are NOT anagrams." << endl;
    }


    return 0;
}