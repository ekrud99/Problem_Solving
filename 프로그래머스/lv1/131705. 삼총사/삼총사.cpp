#include <string>
#include <vector>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;
int cArr[3] = {0, }, cnt = 0;
vector<int> tmp;
void combi(int depth, int next, int s){
    if(depth == 3){
        int sum = 0;
        rep(i, 0, 3){
            sum += tmp[cArr[i] - 1];
        }
        if(sum == 0){
            cnt += 1;  
        } 
        return;
    }

    rep(i, next, s + 1){
        cArr[depth] = i;
        combi(depth + 1, i + 1, s);
    }
    
}

int solution(vector<int> number) {
    int answer = 0;
    tmp = number;
    combi(0, 1, number.size());
    answer = cnt;
    return answer;
}