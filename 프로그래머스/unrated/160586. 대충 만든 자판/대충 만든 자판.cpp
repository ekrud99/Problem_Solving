#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <limits>

#define rep(i, a, b) for(auto i = 0; i < b; ++i)
#define INF numeric_limits<int>::max()
using namespace std;

typedef map<char, int> km; // ex) km['A'] = 1; 'A' 입력하려면 1번 눌러야 함
vector<km> vec;

int check(vector<km> vec, char c){ // 버튼 최소 횟수 return
    int cnt = INF;
    rep(i, 0, vec.size()){
        int mi = vec[i][c];
        if(mi == 0) continue;
        cnt = min(cnt, vec[i][c]);
    }
    if(cnt == INF) return -1;
    if(cnt == 0) return -1;
    return cnt;
}

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vec.resize(keymap.size());
    
    rep(i, 0, keymap.size()){ // 각 문자 별 눌러야 되는 횟수 저장
        rep(j, 0, keymap[i].size()){
            char c = keymap[i][j];
            
            if(vec[i][c] == 0){
                vec[i][c] = j + 1;
            }
        }
    }
    
    rep(i, 0, targets.size()){ // 버튼 횟수 계산
        int cnt = 0;
        bool flag = true;
        rep(j, 1, targets[i].size()){
            char c = targets[i][j];
            int tmp = check(vec, c);
            if(tmp == -1) flag = false;
            cnt += tmp;
        }
        if(flag) answer.push_back(cnt);
        else answer.push_back(-1);
    }
    
    return answer;
}