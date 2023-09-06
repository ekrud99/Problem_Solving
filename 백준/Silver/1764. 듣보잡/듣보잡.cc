#include <iostream>
#include <unordered_map>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, cnt;
string name;
unordered_map<string, bool> mp;
priority_queue<string, vector<string>, greater<string>> pq;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m;

    rep(i, 0, n){ // 듣도 못한 사람 체크
        cin >> name;
        mp[name] = true;
    }

    rep(i, 0, m){ // 듣도 보도 못한사람 체크
        cin >> name;
        if(mp[name]){
            pq.push(name);
            ++cnt;
        } 
    }

    cout << cnt << endl;

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}