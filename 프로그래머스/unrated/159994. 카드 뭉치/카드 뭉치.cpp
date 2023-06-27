#include <string>
#include <vector>
#include <map>
#include <iostream>

#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;
map<int, string> c1, c2;


string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    
    bool flag = true;
    
    rep(i, 0, goal.size()){
        string str = goal[i];
        if(cards1[0] == str){
            cards1.erase(cards1.begin() + 0);
        }else if( cards2[0] == str){
            cards2.erase(cards2.begin() + 0);
        }else{
            flag = false;
            answer.append("No");
            break;
        }
        
    }
    
    if(flag) answer.append("Yes");
    
    return answer;
}