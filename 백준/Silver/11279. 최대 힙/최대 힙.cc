#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;
typedef long long ll;

int n;
priority_queue<int> pq;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        int num;
        cin >> num;
        if(num == 0){ // 0이 입력된 경우 max heap의 top을 출력
            if(pq.empty()) cout << 0 << endl;
            else{
                cout << pq.top() << endl;
                pq.pop();
            }
        }else{ // 자연수 입력 시 max heap에 push
            pq.push(num);
        }
    }

    return 0;
}