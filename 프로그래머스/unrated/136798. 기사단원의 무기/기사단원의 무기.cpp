#include <string>
#include <vector>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int factor(int a) {
    int cnt = 0;
	if (a <= 0) {
		return 0;
	}

	for (int i = 1; i <= a / 2; i++) {
		if (a % i == 0) {
			cnt++;
		}
	}
    cnt += 1;
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0, sum = 0;
    
    rep(i, 1, number + 1){
        int fac = factor(i);
        if(fac > limit) sum += power;
        else sum += fac;
    }
    
    return sum;
}