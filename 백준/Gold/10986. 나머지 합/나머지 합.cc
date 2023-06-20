#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define pb push_back
#define endl "\n";

using namespace std;
typedef long long ll;

int n, m;
long res = 0;
vector<long> sum, vec; //구간 합, 나머지 / vec[1] -> 1을 나머지로 가지는 idx 수

//구간 합 배열에서 나머지가 같은 두 idx에 대해  (sum[idx2] - sum[idx1]) / m 연산을 할 경우 나머지가 0
int main(void){
    FAST;

    cin >> n >> m;
    vec.resize(m);
    sum.resize(n);

    cin >> sum[0];

    rep(i, 1, n){
        int k = 0;
        cin >> k;
        sum[i] = sum[i - 1] + k;
    }

    rep(i, 0, n){ 
        int r = sum[i] % m; //구간 합의 나머지
        if(r == 0) res += 1; // 구간합이 나누어 떨어진다면 정답 1 증가
        vec[r] += 1; // 구간 합 배열에서 r을 나머지로 가지는 idx 수
    }

    rep(i, 0, m){
        if(vec[i] > 1) res += (vec[i] * (vec[i] - 1) / 2); // 나머지가 같은 경우에 대해 nC2 수행
    }

    cout << res;

    return 0;
}