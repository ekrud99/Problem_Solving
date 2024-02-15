#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res = 0;
string skill;
stack<char> s, l;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> skill;

    rep(i, 0, n){
        if(skill[i] == 'L') l.push(skill[i]);
        else if(skill[i] == 'R'){
            if(l.empty()) break;
            else if(l.top() == 'L'){
                l.pop();
                ++res;
            }
        }
        else if(skill[i] == 'S') s.push(skill[i]);
        else if(skill[i] == 'K'){
            if(s.empty()) break;
            else if(s.top() == 'S'){
                s.pop();
                ++res;
            }
        }
        else ++res;
    }

    cout << res;

    return 0;
}