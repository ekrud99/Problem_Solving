#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    long q = -1, r = 0, sum = 0;
    while(q != 0){
        q = (n / a) * b;
        r = n % a;
        n = q + r;
        answer += q;
    }
    
    return answer;
}