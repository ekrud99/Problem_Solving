#include <iostream>
#include <vector>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n"
#define pb push_back

using namespace std;

int n, cnt = 0;
typedef pair<int, int> pos; // x, y
vector<pos> vec;
stack<int> stk;

int main(void){
    FAST;

    cin >> n;
    rep(i, 0, n){
        int x, y;
        cin >> x >> y;
        vec.pb(pos(x, y));
    }
 //1 2 3 1
    stk.push(vec[0].second);
    rep(i, 1, vec.size()){
        int right_h = vec[i].second;
        int left_h = vec[i - 1].second;
        
        while(!stk.empty() && stk.top() > right_h){
            stk.pop();
            cnt++; 
        }

        if(stk.empty() || stk.top() != right_h){
            stk.push(right_h);
        }
// 4 3 2 1
        
    }

    while(!stk.empty()){
        int k = stk.top();
        stk.pop();
        if(k > 0) cnt += 1;
    }

    cout << cnt;

    return 0;
}

