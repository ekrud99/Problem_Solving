#include <iostream>
#include <string>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string s, t;
bool flag = false;

int main(void){
    FAST;

    cin >> s >> t;

    while(1){ // 뒤에 붙은 문자가 A인 경우와 B인 경우로 나눠서 생각
        if(t[t.length() - 1] == 'A') t.pop_back(); // A면 그냥 떼줌
        else{ //B면 떼주고 뒤집어줌
            t.pop_back();
            reverse(t.begin(), t.end());
        }
        if(s == t){ // 같으면 break하고 1출력
            flag = true;
            break;
        }
        if(t == "") break; // 만들 수 없는 경우 마지막에 빈 문자열이 됨
    }

    if(flag) cout << 1;
    else cout << 0;

    return 0;
}