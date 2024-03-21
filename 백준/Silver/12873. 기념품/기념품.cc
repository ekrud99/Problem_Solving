#include <iostream>
#include <deque>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    long long n, lc = 1, cnt = 1;
    deque<long long> dq;

    cin >> n;

    rep(i, 1, n + 1) dq.push_back(i);

    while(1){
        cnt += 1;
        if(dq.size() == 1) break;
        rep(i, 0, lc % dq.size()){
            int tmp = dq.front();
            dq.push_back(tmp);
            dq.pop_front();
        }
        dq.pop_back();
        lc = (cnt * cnt * cnt);
    }

    cout << dq.front();

    return 0;
}