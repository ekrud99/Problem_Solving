#include <iostream>
#include <queue>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef long long ll;

priority_queue<ll, vector<ll>, greater<ll>> pq; // top에 가장 작은 값이 오도록 세팅
ll n, m;
ll sum;
vector<ll> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;
    vec.resize(n);

    rep(i, 0, n){ 
        // 수열을 입력받음과 동시에 초기 합을 세팅하고, priority_queue에 넣어줌
        cin >> vec[i];
        sum += vec[i];
        pq.push(vec[i]);
    }

    rep(i, 0, m){
        // 더해야 할 두 카드를 뽑아줌
        ll c1 = pq.top();
        pq.pop();
        ll c2 = pq.top();
        pq.pop();

        ll replacement = c1 + c2; // 덮어 쓸 수
        ll toAdd = (replacement - c1) + (replacement - c2); // 원래 합에 추가될 수
        sum += toAdd;

        // 카드를 덮어써줌
        pq.push(replacement);
        pq.push(replacement); 
    }

    cout << sum;

    return 0;
}