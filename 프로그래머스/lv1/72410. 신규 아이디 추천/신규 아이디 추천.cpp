#include <iostream>
#include <string>
#include <vector>
#include <regex>
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;

string step1(string id){
    rep(i, 0, id.length()){
        if(id[i] >= 'A' && id[i] <= 'Z') id[i] += 32;
    }
    return id;
}

string step2(string id){
    string str;
    rep(i, 0, id.length()){
        bool flag = false;
        if(id[i] == '.') flag = true;
        else if(id[i] == '-') flag = true;
        else if(id[i] == '_') flag = true;
        else if(id[i] >= 97 && id[i] <= 122) flag = true;
        else if(id[i] - '0' >= 0 && id[i] - '0' <= 9) flag = true;
        if(flag) str += id[i];
    }
    return str;
}

string step3(string id){
    regex pattern("\\.{2,}");
    if(id.length() > 1) return regex_replace(id, pattern, ".");
    return id;
}

string step4(string id){
    if(id[id.length() - 1] == '.') id = id.substr(0, id.length() - 1);
    if(id[0] == '.') id = id.substr(1, id.length());
    return id;
}

string step5(string id){
    if(id == "") return "a";
    return id;
}

string step6(string id){
    if(id.length() > 15){
        id = id.substr(0, 15);
        if(id[id.length() - 1] == '.') id = id.substr(0, 14);
        return id;
    }
    return id;
}

string step7(string id){
    char c = id[id.length() - 1];
    if(id.length() <= 2){
        int lc = 3 - id.length();
        rep(i, 0, lc){
            id += c;
        }
        return id;
    }
    return id;
}

string solution(string new_id) {
    string answer = new_id;
    
    answer = step1(answer);
    answer = step2(answer);
    answer = step3(answer);
    answer = step4(answer);
    answer = step5(answer);
    answer = step6(answer);
    answer = step7(answer);
    
    return answer;
}