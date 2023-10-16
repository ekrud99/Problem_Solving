#include <iostream>
#include <queue>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, k, p = 1;
queue<int> q;
string res = "<";

void print_queue(){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(void){
    FAST;

//    freopen("input.txt", "r", stdin);

    cin >> n >> k;

    while(n--) q.push(p++);

    while(!q.empty()){
        int cnt = k;
        while(cnt--){
            if(cnt == 0){
                res += to_string(q.front());
                res += ", ";
                q.pop();
                break;
            }
            
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }

    res = res.substr(0, res.length() - 2);
    res += '>';
    cout << res;

    return 0;
}