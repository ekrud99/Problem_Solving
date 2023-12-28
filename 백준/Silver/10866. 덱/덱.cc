#include <iostream>
#include <deque>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    int n, x;
    string oper;
    deque<int> dq;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> oper;

        if(oper == "push_front"){
            cin >> x;
            dq.push_front(x);
        }else if(oper == "push_back"){
            cin >> x;
            dq.push_back(x);
        }else if(oper == "pop_front"){
            if(dq.empty()) cout << -1 << endl;
            else{
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }else if(oper == "pop_back"){
            if(dq.empty()) cout << -1 << endl;
            else{
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }else if(oper == "size") cout << dq.size() << endl;
        else if(oper == "empty") cout << dq.empty() << endl;
        else if(oper == "front"){
            if(dq.empty()) cout << -1 << endl;
            else cout << dq.front() << endl;
        }else if(oper == "back"){
            if(dq.empty()) cout << -1 << endl;
            else cout << dq.back() << endl;
        }
    }

    return 0;
}