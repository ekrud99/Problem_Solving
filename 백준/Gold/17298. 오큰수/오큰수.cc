#include <iostream>
#include <stack>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
vector<int> sqc, ans; // 입력 수열, 정답 배열
stack<int> stk; // index 저장할 stack

int main(void){
    FAST;

    cin >> n;

    ans.resize(n);

    rep(i, 0, n){
        int num;
        cin >> num;
        sqc.push_back(num);
    }

    stk.push(0);

    rep(i, 1, n){
        // stack의 top에 담겨있는 index에 해당하는 수의 값 보다 현 위치의 수가 더 크면 
        while(!stk.empty() && (sqc[stk.top()] < sqc[i])){
            ans[stk.top()] = sqc[i]; // 정답배열에 추가하고
            stk.pop(); // 원래 있던값 pop
        }
        stk.push(i); // 현 위치의 index push
    }

    while(!stk.empty()){ // 작업이 끝났는데 오큰수를 못찾은 경우 -1 붙여줌, stack에 남아있는 index는 모두 만족하는 값이 없는 경우를 의미
        ans[stk.top()] = -1;
        stk.pop();
    }

    for(int num : ans) cout << num << " "; // 출력

    return 0;
}