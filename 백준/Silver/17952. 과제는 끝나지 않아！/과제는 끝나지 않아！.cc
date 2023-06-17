#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n";
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

using namespace std;
typedef pair<int, int> task;

int n, is_exist, max_score, t, res;
stack<task> tasks;

int main(void){
    FAST;

    cin >> n;

    rep(i, 0, n){
        cin >> is_exist;
        if(is_exist){
            cin >> max_score >> t;
            tasks.push(task(max_score, t));
        }
        if(!tasks.empty()){
            task& tmp = tasks.top();
            tmp.second -= 1;
            if(!tmp.second){
                res += tmp.first;
                tasks.pop();
            }
        }
           
    }

    cout << res;

    return 0;
}