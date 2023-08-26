#include <iostream>
#include <list>
#include <cctype>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        list<char> pw;
        auto cursor = pw.begin();
        string str;
        cin >> str;
        rep(i, 0, str.length()){
            char code = str[i];
            if(code == '<'){
                if(cursor != pw.begin()) --cursor;
            }else if(code == '>'){
                if(cursor != pw.end()) ++cursor;
            }else if(code == '-'){
                if(cursor != pw.begin()){
                    --cursor;
                    cursor = pw.erase(cursor);
                }
            }else{
                cursor = pw.insert(cursor, code);
                ++cursor;
            }
        }
        for(char c : pw) cout << c;
        cout << endl;
    }

    return 0;
}
