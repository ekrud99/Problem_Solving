#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#define rep(i, a, b) for(auto i = 0; i < b; ++i)
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string last_half = "";
    rep(i, 1, food.size()){
        int fd = food[i];
        int lc = fd / 2;
        char f = i + '0';
        if(lc == 0) continue;
        rep(j, 0, lc){
            answer += f; 
        }
    }
    last_half = answer;
    reverse(last_half.begin(), last_half.end());
    answer += '0';
    answer += last_half;
    
    return answer;
}