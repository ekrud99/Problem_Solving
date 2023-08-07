#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, c;
unordered_map<int, int> mp; // key: code, value: count
unordered_map<int, int> idx; // key: code, value: idx

bool comp(const pair<int, int>& a, const pair<int, int>& b){ // 연산자 재정의
    if(a.second == b.second) return idx[a.first] < idx[b.first]; // 같으면 먼저 나온 순
    return a.second > b.second; // 다르면 value 기준 내림차순
}

int main(void){
    FAST;

    cin >> n >> c;

    rep(i, 0, n){ // code 등장 횟수 저장
        int code;
        cin >> code;
        if(!mp[code]) idx[code] = i;
        ++mp[code];
    }

    vector<pair<int, int>> codes(mp.begin(), mp.end()); // map을 벡터로 만들어줌
    sort(codes.begin(), codes.end(), comp); // 재정의한 comp 기준으로 정렬

    rep(i, 0, codes.size()){ // 등장 횟수만큼 출력
        auto code = codes[i];
        rep(j, 0, code.second) cout << code.first << " ";
    }
    
    return 0;
}
