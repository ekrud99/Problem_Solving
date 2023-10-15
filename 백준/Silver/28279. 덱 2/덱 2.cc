#include <iostream>
#include <deque>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    int n, oper, x;
    deque<int> dq;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> oper;

        if(oper == 1){
            cin >> x;
            dq.push_front(x);
        }else if(oper == 2){
            cin >> x;
            dq.push_back(x);
        }else if(oper == 3){
            if(dq.empty()) cout << -1 << endl;
            else{
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }else if(oper == 4){
            if(dq.empty()) cout << -1 << endl;
            else{
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }else if(oper == 5) cout << dq.size() << endl;
        else if(oper == 6) cout << dq.empty() << endl;
        else if(oper == 7){
            if(dq.empty()) cout << -1 << endl;
            else cout << dq.front() << endl;
        }else if(oper == 8){
            if(dq.empty()) cout << -1 << endl;
            else cout << dq.back() << endl;
        }
    }

    return 0;
}