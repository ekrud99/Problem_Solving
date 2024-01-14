#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer, cnt = 1, idx = 0;
    
    while(1){
        if(cnt == k) break;
        idx += 2;
        idx %= numbers.size();
        ++cnt;
    }
    answer = numbers[idx];
    return answer;
}