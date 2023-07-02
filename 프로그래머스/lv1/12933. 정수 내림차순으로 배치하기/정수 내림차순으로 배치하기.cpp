#include <string>
#include <vector>
#include <algorithm>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;
typedef long long ll;

long long solution(long long n) {
    long long answer = 0;
    vector<ll> res;
    string str = to_string(n);
    
    rep(i, 0, str.length()){
        res.push_back(str[i] - '0');
    }
    
    sort(res.rbegin(), res.rend());
    
    str = "";
    
    rep(i, 0, res.size()){
        str += to_string(res[i]);
    }
    
    answer = stoll(str);
    
    return answer;
}