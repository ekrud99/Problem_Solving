#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

typedef pair<double, int> mx; // 성공률, stage
vector<mx> vec;

bool compare(const mx& a, const mx& b) { // compare 재정의
    if (a.first != b.first) { // 내림차순 정렬
        return a.first > b.first;
    } else { // 같으면 stage 기준 오름차순
        return a.second < b.second;
    }
}

map<int, double> mp; // key: stage, value: # of challenger
map<int, double> mpp; // key: stage, value: # of failure

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer, prob;
    
    rep(i, 0, stages.size()){
        int c = stages[i];
        mpp[c]++; // 해당 stage 실패한 사람 수
        rep(j, 0, c){
            mp[j + 1] += 1; // 해당 stage 성공한(도전한) 사람 수
        }
    }
    
    rep(i, 1, N + 1){
        if(mp[i] == 0){
            vec.push_back(mx(-1, i));
            continue;
        }
        double prob = mpp[i] / mp[i];
        vec.push_back(mx((mpp[i] / mp[i]), i));    
    }
    
    sort(vec.begin(), vec.end(), compare);
    
    rep(i, 0, vec.size()){
        answer.push_back(vec[i].second);
    }
    
    return answer;
}