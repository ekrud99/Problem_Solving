#include <string>
#include <vector>
#include <map>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;
map<int, int> mp; // num, cnt

int solution(vector<int> numbers) {
    int answer = 0;
    
    rep(i, 0, numbers.size()){
        mp[numbers[i]] = 1;
    }
    
    rep(i, 1, 10){
        if(!mp[i]) answer += i;
    }
    
    return answer;
}