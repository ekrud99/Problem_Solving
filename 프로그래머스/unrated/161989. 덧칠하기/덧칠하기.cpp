#include <iostream>
#include <string>
#include <vector>

#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0, cnt = 0;
    
    vector<int> vec;
    vec.resize(n + 1);
    
    rep(i, 0, section.size()){ // 칠해야 할 곳 1, 칠해진 곳 0
        vec[section[i]] = 1;
    }
    
    rep(i, 1, n + 1){
        if(vec[i]){
            cnt++;
            if(i + m - 1 > n){
                break;
            }
            rep(j, 0, m){
                vec[i + j] = 0;
            }
        }
    }
    
    return cnt;
}