#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string num, res;
int n, k;
stack<int> stk;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> k >> num;

    rep(i, 0, n){
        int candi = num[i] - '0';
        // cout << "candi: " << candi << endl;
        while(!stk.empty() && k > 0){
            int tp = stk.top();
            if(tp < candi){
                stk.pop();
                // cout << "pop: " << tp << endl;
                --k;
            }else{
                break;
            }
        }
        stk.push(candi);
    }

    while(!stk.empty() && k > 0){
        stk.pop();
        --k;
    } 

    while(!stk.empty()){
        res += (stk.top()) + '0';
        stk.pop();
    }

    rep(i, 0, res.length()){
        cout << res[res.length() - i - 1];
    }

    return 0;
}