#include <bits/stdc++.h>

#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std; // std 클래스에 있는것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;

priority_queue<int> positive;
priority_queue<int, vector<int>, greater<int>> negative;
int cnt_one, cnt_zero, n, sum;
int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n;

    rep(i, 0, n){
        int k;
        cin >> k;
        if(k > 1) positive.push(k);
        else if( k == 1) cnt_one++;
        else if( k == 0) cnt_zero++;
        else negative.push(k);
    }

    while(positive.size() > 1){
        int front = positive.top();
        positive.pop();
        int end = positive.top();
        positive.pop();

        sum += (front * end);
    }

    while(!positive.empty()){
        sum += positive.top();
        positive.pop();
    }

    while(negative.size() > 1){
        int front = negative.top();
        negative.pop();
        int end = negative.top();
        negative.pop();

        sum += (front * end);
    }

    if(!negative.empty()){
        if(cnt_zero == 0){
            sum += negative.top();
            negative.pop();
        }
    }

    sum += cnt_one;
    cout << sum;

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}