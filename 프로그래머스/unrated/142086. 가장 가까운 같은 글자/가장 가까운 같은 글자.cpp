#include <string>
#include <vector>
#include <map>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

map<char, int> word;

vector<int> solution(string s) {
    
    vector<int> answer;
    
    rep(i, 0, s.length()){
        if(word[s[i]] == 0) answer.push_back(-1);
        else{
            rep(j, 1, i + 1){
                //cout << "s: " << s[i - j] << endl;
                if(s[i - j] == s[i]){
                    answer.push_back(j);
                    break;
                } 
            }
        }
        word[s[i]] += 1;
    }
    
    return answer;
    
}