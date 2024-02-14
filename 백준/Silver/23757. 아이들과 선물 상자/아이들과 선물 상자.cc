#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m;
priority_queue<int> p;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;

    rep(i, 0, n){
        int num;
        cin >> num;
        p.push(num);
    }

    rep(i, 0, m){
        int num;
        cin >> num;
        
        if(p.top() >= num){
            p.push(p.top() - num);
            p.pop();
        }
        else{
            cout << 0;
            return 0;
        }
    }

    cout << 1;

    return 0;
}