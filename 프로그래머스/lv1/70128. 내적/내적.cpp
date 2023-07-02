#include <string>
#include <vector>
#define rep(i, a, b) for(auto i = a; i < b; ++i)
using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    rep(i, 0, a.size()){
        answer += (a[i] * b[i]);
    }
    
    return answer;
}