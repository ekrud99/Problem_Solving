#include <vector>
#include <set>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

set<int> s;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    rep(i, 0, numbers.size()){
        rep(j, 0, numbers.size()){
            if(i == j) continue;
            s.insert(numbers[i] + numbers[j]);
        }
    }
    
    for(auto i : s) answer.push_back(i);

    return answer;
}