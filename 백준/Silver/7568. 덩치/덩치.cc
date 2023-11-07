#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, height, weight, ranking = 1;
vector<pair<int, int>> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vec.resize(n);

    rep(i, 0, n){
        cin >> weight >> height;
        vec[i] = make_pair(weight, height);
    }

    rep(i, 0, n){
        weight = vec[i].first;
        height = vec[i].second;
        rep(j, 0, n){
            if(weight < vec[j].first && height < vec[j].second) ++ranking;
        }
        cout << ranking << " ";
        ranking = 1;
    }

    return 0;
}