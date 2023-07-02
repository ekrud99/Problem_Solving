#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#define rep(i, a, b) for(auto i = a; i < b; ++i)
using namespace std;
typedef pair<int, int> pos; // y, x
pos rpos, lpos; // 왼손 위치, 오른손 위치
map<int, pos> mp; // ex) mp[1] = (0, 0) => 1번 버튼의 위치: 0, 0

string solution(vector<int> numbers, string hand) {
    string answer = "";
    rpos = make_pair(3, 0);
    lpos = make_pair(3, 2); // R, L initial pos
    int n = 1, ldist = 0, rdist = 0;
    
    rep(i, 0, 4){ // num pad pos
        rep(j, 0, 3){
            pos p = make_pair(i, j);
            mp[n] = p;
            n++;
        }
    }
    mp[0] = pos(3, 1);
    
    rep(i, 0, numbers.size()){
        int num = numbers[i];
        if(num == 1 || num == 4 || num == 7){
            answer += 'L';
            lpos = mp[num];
        } 
        else if(num == 3 || num == 6 || num == 9){
            answer += 'R';
            rpos = mp[num];
        }
        else{
            pos num_pos = mp[num];
            ldist = abs(num_pos.first - lpos.first) + abs(num_pos.second - lpos.second);
            rdist = abs(num_pos.first - rpos.first) + abs(num_pos.second - rpos.second);
            
            if(ldist > rdist){
                rpos = num_pos;
                answer += 'R';
            }else if(ldist < rdist){
                lpos = num_pos;
                answer += 'L';
            }else{
                if(hand == "right"){
                    rpos = num_pos;
                    answer += 'R';
                }else{
                    lpos = num_pos;
                    answer += 'L';
                }
            }
        }
        
    }
    
    return answer;
}