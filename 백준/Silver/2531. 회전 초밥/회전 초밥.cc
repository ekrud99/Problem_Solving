#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;

int n, d, k, c, mx = 0, cnt = 0;
vector<int> vec; // index 부터 k개를 먹었을 때 쿠폰가지 고려해서 먹을 수 있는 초밥의 최대값
vector<int> sushis; // 초밥 배열


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
        bool flag = true; // 쿠폰에 있는 초밥이 등장하지 않았으면 true
        int cnt = 0; // 중복을 제거한 초밥의 최대값 저장
        vector<int> dup(3001); // k개의 초밥을 연속으로 먹을 동안 중복 여부
        rep(j, 0, k){
            int sushi = sushis[(i + j) % n]; // 현재 먹는 초밥
            if(!dup[sushi]) cnt++; // 이전에 등장하지 않았다면 cnt += 1;
            dup[sushi] = 1; // 중복 제거 위해 기록
            if(sushi == c) flag = false; // 쿠폰에 있는 초밥이 등장했다면 false
        }
        vec[i] = cnt; 
        if(flag) vec[i] += 1; // 쿠폰에 있는 초밥 안먹었으면 + 1
    }

    rep(i, 0, n){
        int cnt = vec[i];
        mx = max(cnt, mx);
    }

    cout << mx;

    return 0;
}
