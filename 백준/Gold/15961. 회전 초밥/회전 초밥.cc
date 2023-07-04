#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;

int n, d, k, c, mx = 0, cnt = 0;
vector<int> vec; // index 부터 k개를 먹었을 때 쿠폰가지 고려해서 먹을 수 있는 초밥의 최대값
vector<int> sushis; // 초밥 배열


int main(void){
    FAST;

    cin >> n >> d >> k >> c;

    rep(i, 0, n){
        int sushi;
        cin >> sushi;
        sushis.push_back(sushi);
    }
    
    deque<int> dq;
    bool flag = true; // 쿠폰에 있는 초밥 안먹었으면 true
    vector<int> dup(3001);

    rep(i, 0, k){ // 초기 k개 push
        dq.push_back(sushis[i]);
        if(dup[sushis[i]] == 0){
            cnt++;
        } 
        dup[sushis[i]] += 1;
        if(sushis[i] == c){
            flag = false;
        } 
    }
    if(flag) cnt++;
    mx = cnt;

    rep(i, 0, n){
        int sushi = dq.front();
        dup[sushi] -= 1;
        dq.pop_front();
        if(dup[sushi] == 0){
            cnt--;
        } 

        sushi = sushis[(i + k) % n];
        
        if(dup[sushi] == 0){
            dq.push_back(sushi);
            cnt++;
            dup[sushi] = 1;
        }else{
            dq.push_back(sushi);
            dup[sushi] += 1;
        }

        if(flag){ // 초기 쿠폰 처리
            cnt--;
            flag = false;
        }

        if(dup[c] == 0){
            mx = max(cnt + 1, mx);

        }else{
            mx = max(cnt, mx);
        }
    }

    cout << mx;

    return 0;
}