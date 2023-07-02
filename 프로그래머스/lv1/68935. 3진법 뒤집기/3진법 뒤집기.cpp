#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> ternary(int decimal) {  // 3진법 역순으로 return
    vector<int> ternary;
    
    while (decimal > 0) {
        int remainder = decimal % 3;
        ternary.push_back(remainder);
        decimal /= 3;
    }
    
    if (ternary.empty()) {
        ternary.push_back(0);
    }
    
    return ternary;
}

int decimal(string ternary) {
    int decimal = 0;
    int power = 0;
    
    for (int i = ternary.length() - 1; i >= 0; --i) {
        int digit = ternary[i] - '0';
        decimal += digit * pow(3, power);
        power++;
    }
    
    return decimal;
}

int solution(int n) {
    int answer = 0;
    string str = "";
    vector<int> ter = ternary(n);
    
    for(auto t : ter){
        str += to_string(t);
    }
    
    answer = decimal(str);
    
    return answer;
}