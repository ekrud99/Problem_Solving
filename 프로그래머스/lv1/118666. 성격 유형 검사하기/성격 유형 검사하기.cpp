#include <string>
#include <vector>
#include <map>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

map<char, int> mp; // 성격유형, 점수

string solution(vector<string> survey, vector<int> choices) {
    string answer = "RCJA"; // 사전순 정렬을 위한 초기 값
    
    rep(i, 0, survey.size()){
        string str = survey[i];
        char p1 = str[0];
        char p2 = str[1];
        if(choices[i] - 4 < 0) mp[p1] += 4 - choices[i];
        else if(choices[i] - 4 > 0) mp[p2] += choices[i] - 4; 
    } // map에 성격 유형별 점수 할당

    if(mp['R'] < mp['T']) answer[0] = 'T';
    if(mp['C'] < mp['F']) answer[1] = 'F';
    if(mp['J'] < mp['M']) answer[2] = 'M';
    if(mp['A'] < mp['N']) answer[3] = 'N';
    // 사전 후순위 값이 더 크면 변경
    
    return answer;
}