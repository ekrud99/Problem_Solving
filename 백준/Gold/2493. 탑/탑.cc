#include <iostream>
#include <stack>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pii; // value, pos
stack<pii> stk;
int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        int b;
        bool is_find = false;
        cin >> b;

        while(!stk.empty()){
            pii cmp = stk.top();
            if(cmp.first > b){
                is_find = true;
                cout << cmp.second << " ";
                break;
            } 
            else stk.pop();
        }

        if(!is_find) cout << 0 << " ";
        stk.push(pii(b, i + 1));
    }

    return 0;
}