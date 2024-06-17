#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n, d, cnt = 0;
    priority_queue<int> pq;

    cin >> n;

    --n;
    cin >> d;

    while(n--){
        int num;
        cin >> num;
        pq.push(num);
    }

    while(!pq.empty() && d <= pq.top()){
        ++cnt;
        if(pq.empty()) break;
        if(pq.top() >= d){
            pq.push(pq.top() - 1);
            pq.pop();
            ++d;
        }
    }

    cout << cnt;

    return 0;
}