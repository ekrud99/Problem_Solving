#include <string>
#include <vector>
#include <map>
#include <iostream>
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;

map<string, int> mp;

bool check(string str){
    int s = 0, e = 1;
    bool flag = true;
    string pre = "";
    while(1){
        string tmp = str.substr(s, e);
        if(mp[tmp] != 1){
            flag = false;
            e += 1;
        } 
        else{
            flag = true;
            if(pre == tmp) return false;
            else pre = tmp;
            if(s + e == str.length()){
                return flag;
            } 
            s += e;
            e = 1;
        }
        if(s + e > str.length()) return false;
    }
}

int solution(vector<string> babbling) {
    int answer = 0;
    
    rep(i, 0, babbling.size()){
        mp["aya"] = 1;
        mp["ye"] = 1;
        mp["woo"] = 1;
        mp["ma"] = 1;
        if(mp[babbling[i]] != 0){
            cout << babbling[i] << endl;
            answer += 1;
            continue;
        } 

        if(babbling[i].length() < 2) continue;
        
        if(check(babbling[i])) answer += 1;
    }
    
    return answer;
}
