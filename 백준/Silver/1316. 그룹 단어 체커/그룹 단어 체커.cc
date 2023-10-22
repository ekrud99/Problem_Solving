#include <iostream>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res;
string str;
char prev_char, cur_char;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        unordered_map<char, bool> check;
        bool is_group = true;
        cin >> str;
        prev_char = str[0];
        check[prev_char] = true;
        
        rep(j, 1, str.length()){
            cur_char = str[j];
            if(prev_char != cur_char && !check[cur_char]){
                prev_char = cur_char;
                check[cur_char] = true;
            }else if(prev_char != cur_char && check[cur_char]){
                is_group = false;
                break;
            }
        }
        if(is_group) ++res;
    }

    cout << res;

    return 0;
}