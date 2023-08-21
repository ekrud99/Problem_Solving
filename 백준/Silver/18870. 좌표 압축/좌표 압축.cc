#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
vector<int> origin, ans; // 원본, 정답 찾을 vector
unordered_map<int, int> mp; // key: number, value: 존재 유무

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    cin >> n;
    origin.resize(n);

    rep(i, 0, n){
        int num;
        cin >> num;
        origin[i] = num; // 원본엔 그대로 넣음
        if(!mp[num]){ // 중복된 요소는 제외 하고 넣어줌
            ++mp[num];
            ans.push_back(num);
        } 
    }

    sort(ans.begin(), ans.end()); // 정렬

    rep(i, 0, origin.size()){
        auto it = lower_bound(ans.begin(), ans.end(), origin[i]);
        int idx = it - ans.begin();
        cout << idx << " ";
    }

    return 0;
}