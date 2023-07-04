#include <string>
#include <vector>

using namespace std;

int win[46]; // ex) win[1] = 1; => 1번은 당첨 번호

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt = 0; // 당첨 번호 개수
    int zero_cnt = 0; // 0 개수
    
    for(auto i : win_nums){
        win[i] = 1;
    }
    
    for(auto i : lottos){
        if(i == 0) zero_cnt++;
        else if(win[i]) cnt++;
    }
    
    int bc = (7 - (cnt + zero_cnt)) > 6 ? 6 : (7 - (cnt + zero_cnt)); // best case
    answer.push_back(bc);
    
    int wc = (7 - cnt) > 6 ? 6 : (7 - cnt); // worst case
    answer.push_back(wc);
    
    return answer;
}