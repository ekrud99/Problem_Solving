#include <iostream>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, cnt, res = 0;
string game, name;
set<string> s;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> game;

    rep(i, 0, n){
        cin >> name;
        s.insert(name);
    }

    cnt = s.size();

    if(game == "Y") cout << cnt;
    else if(game == "F") cout << cnt / 2;
    else cout << cnt / 3;

    return 0;
}