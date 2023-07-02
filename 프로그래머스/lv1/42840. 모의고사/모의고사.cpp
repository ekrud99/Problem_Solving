#include <string>
#include <vector>
#include <algorithm>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

vector<int> s1 = {1, 2, 3, 4, 5}, s2 = {2, 1, 2, 3, 2, 4, 2, 5}, s3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer, sums = {0, 0, 0};
    
    rep(i, 0, answers.size()){
        int ans = answers[i], n1 = i % 5, n2 = i % 8, n3 = i % 10;
        if(ans == s1[n1]) sums[0] += 1;
        if(ans == s2[n2]) sums[1] += 1;
        if(ans == s3[n3]) sums[2] += 1;
    }
    
    int mx = -1;
    
    rep(i, 0, 3){ // 정답을 가장 많이 맞춘 사람을 찾으면 vector를 비우고 그 사람만 넣어줌, 같으면 모두 넣어줌
        if(mx < sums[i]){
            answer.clear();
            answer.push_back(i + 1);
            mx = sums[i];
        }else if(mx == sums[i]){
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}