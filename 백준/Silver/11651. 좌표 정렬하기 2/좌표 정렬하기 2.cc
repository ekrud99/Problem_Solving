#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pos;

bool compare(pos p1, pos p2){
    if(p1.second == p2.second) return p1.first < p2.first;
    return p1.second < p2.second;
}

int n, x, y;
vector<pos> coor;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> x >> y;
        coor.push_back(pos(x, y));
    }

    sort(coor.begin(), coor.end(), compare);

    for(pos p : coor) cout << p.first << " " << p.second << endl;

    return 0;
}