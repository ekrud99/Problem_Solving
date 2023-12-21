#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, packet;
queue<int> q;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(1){
        cin >> packet;
        if(packet == -1) break;
        else if(packet == 0){
            if(q.size() != 0) q.pop();
        }else{
            if(q.size() < n) q.push(packet);
        }
    }

    if(q.empty()){
        cout << "empty";
        return 0;
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}