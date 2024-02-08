#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, x;
string oper;
queue<int> q;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> oper;

        if(oper == "push"){
            cin >> x;
            q.push(x);
        }
        else if(oper == "front"){
            if(!q.empty()) cout << q.front() << endl;
            else cout << -1 << endl;
        }
        else if(oper == "back"){
            if(!q.empty()) cout << q.back() << endl;
            else cout << -1 << endl;
        }
        else if(oper == "empty") cout << q.empty() << endl;
        else if(oper == "size") cout << q.size() << endl;
        else if(oper == "pop"){
            if(!q.empty()){
                cout << q.front() << endl;
                q.pop();
            } 
            else cout << -1 << endl;
        }
    }

    return 0;
}