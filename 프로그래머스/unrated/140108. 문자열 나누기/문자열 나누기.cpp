#include <string>
#include <vector>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int solution(string s) {
    int answer = 0, same = 0, diff = 0, cnt = 0, idx;
    char first = s[0];
    
    rep(i, 0, s.length()){
        if(first == s[i]){
            same++;
        }else diff++;
        if(same == diff){
            cnt++;
            same = 0;
            diff = 0;
            cout << "same: " << s[i] << endl;
            idx = i;
            if(i + 1 == s.length()) break;
            first = s[i + 1];
        }
    }
    if(idx != s.length() - 1) cnt++;
    cout << cnt;
    return cnt;
}