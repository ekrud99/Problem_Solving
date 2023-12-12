#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string s1, s2;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    // cin >> s1 >> s2;
    getline(cin, s1);
    getline(cin, s2);

    int pos = s1.find(s2);
    int count = 0;
    while (pos != string::npos) {
        count++;
        pos = s1.find(s2, pos + s2.size());
    }

    cout << count;

    return 0;
}