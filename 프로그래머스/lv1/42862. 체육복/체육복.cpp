#include <string>
#include <vector>
#include <map>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; i++)

using namespace std;

map<int, int> rsv; // 학생번호, 여벌옷 보유 여부
map<int, int> lst; // 학생 번호, 분실 여부

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    rep(i, 1, n + 1){
        rsv[i] += 1;
    }
    
    for(auto i : lost){
        rsv[i] -= 1;
    }    
    
    for(auto i : reserve){
        rsv[i] += 1;
    }
    
    rep(i, 1, n + 1){
        cout << rsv[i] << endl;
    }
    
    rep(i, 1, n + 1){
        if(rsv[i] == 0){
            if(i == 1 && rsv[i + 1] > 1){
                answer++;
                rsv[i + 1]--;
                continue;
            }
            if(rsv[i - 1] > 1){
                answer++;
                rsv[i - 1]--;
                continue;
            }
            if(rsv[i + 1] > 1){
                answer++;
                rsv[i + 1]--;
                continue;
            }
        }else answer++;
    }
    
    return answer;
}