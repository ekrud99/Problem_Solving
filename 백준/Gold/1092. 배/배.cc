#include <iostream>
#include <algorithm>
#include <list>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, c, b, res;
vector<int> crane, box;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> c;
        crane.push_back(c);
    }

    cin >> m;

    rep(i, 0, m){
        cin >> b;
        box.push_back(b);
    }

    sort(crane.begin(), crane.end(), greater<int>());
    sort(box.begin(), box.end(), greater<int>());

    if(crane.front() < box.front()){
        cout << -1;
        return 0;
    }

    while(!box.empty()){ 
        rep(i, 0, n){
            rep(j, 0, box.size()){
                if(crane[i] >= box[j]){
                    box.erase(box.begin() + j);
                    break;
                }
            }
       } 
       ++res;
    }

    cout << res;

    return 0;
}