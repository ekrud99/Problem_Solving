#include <bits/stdc++.h>

#define endl "\n" 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define pii pair<int, int>

using namespace std; 

int t, n, m, p;

int main(){
    FAST;

    cin >> t;

    while(t--){
        cin >> n >> m;
        priority_queue<int> pq; // 출력 우선순위 결정하는 우선순위 큐
        queue<pii> q; // 프린터 큐

        rep(i, 0, n){ // 프린트할 문서와 문서의 위치 입력
            cin >> p;
            pq.push(p);
            q.push(make_pair(p, i));
        }

        int res = 1; // 프린트 되는 순서

        while(1){
            // 현재 출력할 문서와 우선순위가 가장 높은 문서의 우선순위가 같은 경우
            if(pq.top() == q.front().first){ 
                if(q.front().second == m){ // m번째 문서라면 순서 출력
                    cout << res << endl;
                    break;
                }
                pq.pop(); // 아니면 프린트 해주고 ++res
                q.pop();
                ++res;
            // 현재 출력할 문서와 우선순위 보다 높은 우선순위의 문서가 큐에 있는 경우
            }else{
                auto tmp = q.front(); // 맨 뒤로 보내줌
                q.pop();
                q.push(tmp);
            }
        }
    }
    return 0;
}