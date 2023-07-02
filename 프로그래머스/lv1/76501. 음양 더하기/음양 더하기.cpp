#include <string>
#include <vector>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    rep(i, 0, signs.size()){
        if(signs[i]) answer += absolutes[i];
        else answer -= absolutes[i];
    }
    
    return answer;
}