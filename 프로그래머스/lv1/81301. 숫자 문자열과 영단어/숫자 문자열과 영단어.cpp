#include <string>
#include <vector>
#include <iostream>
#include <map>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

map<string, int> mp; // ex) key: "zero", value: 0

int solution(string s) {
    int answer = 0;
    string res = "", word = "";
    mp["zero"] = 10; mp["one"] = 1; mp["two"] = 2; mp["three"] = 3; mp["four"] = 4; mp["five"] = 5; mp["six"] = 6; mp["seven"] = 7; mp["eight"] = 8; mp["nine"] = 9;
    
    rep(i, 0, s.length()){
        if(s[i] - '0' < 10){
            res += s[i];
        }
        else{
            word += s[i];
            if(mp[word] && mp[word] != 10){
                res += mp[word] + '0';
                word = "";
            }
            if(mp[word] == 10){
                res += '0';
                word = "";
            }
        }
        
    }
    cout << res << endl;
    answer = stoi(res);
    
    return answer;
}