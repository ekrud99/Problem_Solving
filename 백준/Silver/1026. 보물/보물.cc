#include <iostream>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);
    
    cin >> n;

    vector<int> v1(n), v2(n);

    rep(i, 0, 2){ // 두 수열 입력
        rep(j, 0, n){
            if(i == 0) cin >> v1[j];
            else cin >> v2[j];
        }
    }

    sort(v1.begin(), v1.end()); // 오름차순 정렬
    sort(v2.begin(), v2.end(), greater<>()); // 내림차순 정렬

    rep(i, 0, n){ // 문제 조건대로 값 구해줌
        res += (v1[i] * v2[i]);
    }

    cout << res;

    return 0;
}

