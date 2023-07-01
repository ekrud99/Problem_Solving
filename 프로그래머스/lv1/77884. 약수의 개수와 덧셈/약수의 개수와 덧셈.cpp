#include <string>
#include <vector>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int factor(int a){
    int cnt = 0;
	if (a <= 0){
		return cnt;
	}
	for (int i = 1; i <= a; i++){
		if(a % i == 0){
			cnt++;
		}
	}
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;

    rep(i, left, right + 1){
        int n = factor(i);
        if(!(n % 2)) answer += i;
        else answer -= i;
    }
    
    return answer;
}