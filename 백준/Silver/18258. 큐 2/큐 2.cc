#include <iostream>
#include <queue>
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int n;
string oper;
queue<int> q;
int main(void){
    FAST;
    //freopen("input.txt", "r", stdin);
    cin >> n;

    rep(i, 0, n){
        cin >> oper;
        if(oper == "push"){
            int num;
            cin >> num;
            q.push(num);
        }else if(oper == "front"){
            if(q.empty()) cout << -1 << endl;
            else{
                cout << q.front() << endl;
            }
        } 
        else if(oper == "back"){
            if(q.empty()) cout << -1 << endl;
            else{
                cout << q.back() << endl;
            }
        } 
        else if(oper == "size") cout << q.size() << endl;
        else if(oper == "empty") cout << q.empty() << endl;
        else if(oper == "pop"){
            if(q.empty()) cout << -1 << endl;
            else{
                cout << q.front() << endl;
                q.pop();
            }
        } 
    }

    return 0;
}