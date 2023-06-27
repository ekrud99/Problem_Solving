#include <iostream>
#include <string>
#include <vector>
#include <map>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

map<char, int> mp;

char next(char c){
    c += 1;
    if(c > 'z' - 0) c = 'a';
    while(mp[c] == 0){
        c += 1;
    }

    return c;
}

string solution(string s, string skip, int index) {
    string answer = "";
    
    rep(i, 0, 26){
        char c = 97 + i;
        mp[c] = 1;
    }
    
    rep(i, 0, skip.length()){ // value 0 이면 skip
        mp[skip[i]] = 0;
    }
    
    rep(i, 0, s.length()){
        char c = s[i];
        rep(i, 0, index){
            c = next(c);
        }
        answer.push_back(c);
    }
    
    return answer;
}