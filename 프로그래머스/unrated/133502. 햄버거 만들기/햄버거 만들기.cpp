#include <string>
#include <vector>
#include <iostream>
#include <stack>
#define rep(i, a, b) for(auto i = 0; i < b; ++i)
using namespace std;

stack<int> hbg, tmp;

int solution(vector<int> ingredient) {
    int answer = 0, cnt = 0;
    vector<int> cmp = {1, 3, 2, 1};
    rep(i, 1, ingredient.size()){
       int igdt = ingredient[i];
        hbg.push(igdt);
        vector<int> vec = {};
        if(hbg.size() >= 4){
            rep(j, 0, 4){
                int temp = hbg.top();
                vec.push_back(temp);
                tmp.push(temp);
                hbg.pop();   
            }

            if(cmp == vec) answer += 1;
            else{
                rep(k, 0, 4){
                    int n = tmp.top();
                    hbg.push(n);
                    tmp.pop();
                }
            }
        }
        
        
    }
    
    return answer;
}