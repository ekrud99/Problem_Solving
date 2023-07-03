#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;

int n, d, k, c, mx = 0, cnt = 0;
vector<int> vec;
vector<int> sushis;


int main(void){
    FAST;

    cin >> n >> d >> k >> c;
    vec.resize(n);

    rep(i, 0, n){
        int sushi;
        cin >> sushi;
        sushis.push_back(sushi);
    }
    
    rep(i, 0, n){
        bool flag = true;
        int cnt = 0;
        vector<int> dup(3001);
        rep(j, 0, k){
            int sushi = sushis[(i + j) % n];
            if(!dup[sushi]) cnt++;
            dup[sushi] = 1;
            if(sushi == c) flag = false;
        }
        vec[i] = cnt;
        if(flag) vec[i] += 1;
    }

    rep(i, 0, n){
        int cnt = vec[i];
        mx = max(cnt, mx);
    }

    cout << mx;

    return 0;
}