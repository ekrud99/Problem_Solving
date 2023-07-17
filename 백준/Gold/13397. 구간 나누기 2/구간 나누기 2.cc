#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define INF numeric_limits<int>::max();
using namespace std;
int n, m;
vector<int> vec;
bool check(int num){
    int cnt = 1, mx = vec[0], mi = vec[0], res = 0;
    rep(i, 1, n){
        int val = vec[i];
        mx = max(mx, val);
        mi = min(mi, val);
        res = mx - mi; // 현재 index까지의 최대값 유지
        if(res > num){ // 만약 설정한 최대값을 넘어가면 구간 나눔, 앞의 구간은 어디서 나누든 상관 없음(최대값만 안넘으면 됨)
            mx = vec[i];
            mi = vec[i];
            ++cnt;
        }
    }
    if(cnt > m) return false;
    return true;
}

int b_search(){
    int lo = -1;
    int hi = *max_element(vec.begin(), vec.end());
    int mid;

    while(lo + 1 < hi){
        mid = (lo + hi) / 2;

        //cout << lo << " " << mid << " " << hi << endl;
        if(!check(mid)) lo = mid;
        else hi = mid;
    }
    //cout << lo << " " << mid << " " << hi << endl;
    return hi;
}

int main(void){
    FAST;

    cin >> n >> m;

    rep(i, 0, n){
        int num;
        cin >> num;
        vec.push_back(num);
    }

    cout << b_search();

    return 0;
}