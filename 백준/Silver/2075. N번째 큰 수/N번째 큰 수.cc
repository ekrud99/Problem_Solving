#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pq; // min heap

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n * n){ // min heap의 크기는 항상 n으로 유지해줌
        int num;
        cin >> num;
        pq.push(num);
        if(i > n - 1) pq.pop(); // i가 n - 1 보다 커지는 시점부터는 pq의 size를 관리해줘야 함
    }

    cout << pq.top();

    return 0;
}