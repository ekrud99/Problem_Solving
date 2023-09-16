#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res;
vector<string> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vec.resize(n);
    res = n; // 초기값은 전체 집합의 크기

    rep(i, 0, n){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end()); // 접두사의 특성 활용 위해 정렬

    string head = vec.front(); // 비교대상

    rep(i, 1, n){
        if(vec[i].find(head) == 0) --res; // 접두사 포함 시 집합에서 제거
        head = vec[i]; // 접두사 초기화
    }

    cout << res;

    return 0;
}
