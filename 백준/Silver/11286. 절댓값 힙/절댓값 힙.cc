#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
typedef pair<int, int> ab; // abs, value
priority_queue<ab, vector<ab>, greater<ab>> pq; // 위에서 선언한 ab의 first 기준 정렬

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        int oper;
        cin >> oper;
        if(oper != 0) pq.push(ab(abs(oper), oper)); // 0이 아니면 절대값, 원래 값 push
        else{ // 0이면 비어있을 경우 0 출력, 아니면 원래 값 출력하고 pop
            if(pq.empty()) cout << 0 << endl;
            else {
                cout << pq.top().second << endl;
                pq.pop();
            }
        }
    }

    return 0;
}