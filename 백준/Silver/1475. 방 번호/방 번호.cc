#include <iostream>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int plastic[10] = {}, cnt = 1;
string room_number;

void set_plastic(){
    rep(i, 0, 10) plastic[i] = i;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> room_number;

    rep(i, 0, room_number.length()) ++plastic[room_number[i] - '0'];

    plastic[6] = (plastic[6] + plastic[9] + 1) / 2;
    plastic[9] = plastic[6];

    rep(i, 0, 10) cnt = max(cnt, plastic[i]);

    cout << cnt;

    return 0;
}