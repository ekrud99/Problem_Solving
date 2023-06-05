#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i) 
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std; // std 클래스에 있는 것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;

int n, m, k, x, dist;
vector<int> visited, res;
vector<vector<int>> vec;
queue<int> q;
void bfs(int node){
    q.push(node);
    visited[node] = 0; // 시작 노드의 거리는 0으로 초기화

    while(!q.empty()){
        int cur_node = q.front();
        q.pop();
        for(int i : vec[cur_node]){
            if(visited[i] == -1){
                visited[i] = visited[cur_node] + 1; // 다음 노드의 거리는 현재 노드의 거리 + 1
                q.push(i);
            }
        }
    }
}

int main(){
    FAST; // 입출력 빠르게 하기 위해
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> m >> k >> x;
    visited.resize(n + 1, -1); // visited 벡터를 -1로 초기화

    vec.resize(n + 1); // vec 벡터를 n+1 크기로 초기화

    rep(i, 0, m){
        int from, to;
        cin >> from >> to;
        vec[from].pb(to);
    }

    bfs(x);

    REP(i, 0, n){
        if(visited[i] == k){
            res.pb(i);
        }
    }

    if(res.empty()){
        cout << -1 << endl;
    }else{
        sort(res.begin(), res.end());
        for(int tmp: res){
            cout << tmp << endl;
        }
    }

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}
