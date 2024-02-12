#include <iostream>
#include <queue>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, k;
queue<int> q;
vector<int> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> k;

    rep(i, 1, n + 1) q.push(i);

    while(1){
        if(q.empty()) break;
        rep(i, 0, k - 1){
            int tmp;
            tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        vec.push_back(q.front());
        q.pop();
    }

    rep(i, 0, vec.size()){
        if(i == 0) cout << '<';
        cout << vec[i];
        if(i != vec.size() - 1) cout << ", ";
    }
    cout << ">";

    return 0;
}