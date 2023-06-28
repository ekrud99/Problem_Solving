#include <iostream>
#include <string>
#include <vector>
#include <map>

#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

map<char, int> trm;
int t_year, t_month, t_date, p_year, p_month, p_date;

bool calc(char term){
    cout << p_month << endl;
    int n = p_month + trm[term];
    int y = n / 12;
    int m = n % 12;
    int cnt = 0;
    if(n > 12){
        while(n > 12){
            n -= 12;
            cnt += 1;
            }
    }
    p_year += cnt;
    p_month = n;
    
    cout << p_year << " " << p_month << " " << p_date << endl;
    if(p_year < t_year) return false;
    if(p_year == t_year){
        if(p_month < t_month) return false;
        else if(p_month == t_month){
            if(p_date <= t_date) return false;
        }
    }
    return true;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    t_year = stoi(today.substr(0, 4));
    t_month = stoi(today.substr(5, 7));
    t_date = stoi(today.substr(8, 10));
    
    rep(i, 0, terms.size()){
        char c = terms[i][0];
        int m = stoi(terms[i].substr(2, terms[i].length() - 1)); // 약관별 유효기간 map에 담음 
        trm[c] = m;
    }    
    
    rep(i, 0, privacies.size()){
        p_year = stoi(privacies[i].substr(0, 4));
        p_month = stoi(privacies[i].substr(5, 7));
        p_date = stoi(privacies[i].substr(8, 10));
        char p_term = privacies[i][privacies[i].length() - 1];
        if(!calc(p_term)) answer.push_back(i + 1);
    }
    
    return answer;
}