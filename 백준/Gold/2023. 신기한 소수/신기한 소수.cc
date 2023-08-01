#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;

bool is_possible(int num){ // 소수인지 아닌지 판별하는 함수
    rep(i, 2, num){
        if(num % i == 0) return false;
    }
    return true;
}

void dfs(int num, int idx){ // 소수, 자리수
    if(idx == n){ // 입력받은 자리수 도달 시 return
        if(is_possible(num)) cout << num << endl;
        return;
    }
    
    rep(i, 1, 10){
        if(i % 2 == 0) continue; // 가지치기
        if(is_possible(num * 10 + i)) dfs(num * 10 + i, idx + 1); // 소수면 계속 탐색
    }
}

int main(void){
    FAST;

    cin >> n;
    
    //한자리수 소수 2, 3, 5, 7에 대해 dfs 수행

    dfs(2, 1);

    rep(i, 3, 8){
        if(i % 2 != 0) dfs(i, 1);
    }

    return 0;
}
