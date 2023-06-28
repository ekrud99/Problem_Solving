#include <iostream>
#include <string>
#include <vector>
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;
using lli = long long int;
int solution(string t, string p) {
    int answer = 0, cnt = 0;
    int p_length = p.length();
    
    rep(i, 0, t.length() - p_length + 1){
        lli cmp = stoll(t.substr(i, p_length));
        if(cmp <= stoll(p)) cnt++;
    }
    answer = cnt;
    return answer;
}