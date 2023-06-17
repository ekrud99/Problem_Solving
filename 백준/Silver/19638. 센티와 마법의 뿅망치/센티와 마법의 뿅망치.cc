#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n"

using namespace std;

int n, h, t, cnt;
bool flag = false;
priority_queue<int> q;
vector<int> heights;

int main(void){
    FAST;

    cin >> n >> h >> t;

    rep(i, 0, n){
        int height;
        cin >> height;
        q.push(height);
    }

    if(q.top() < h){
        cout << "YES\n";
        cout << 0;
        return 0;
    }

    while(t > 0){
        t--;
        if(q.top() == 1) break;
        int top = q.top() / 2;
        q.pop();
        q.push(top);
        cnt++;
        if(q.top() < h){
            flag = true;
            break;
        }
        

    }
    if(flag){
        cout << "YES\n";
        cout << cnt;
    }else{
        cout << "NO\n";
        cout << q.top();
    }
    return 0;
}