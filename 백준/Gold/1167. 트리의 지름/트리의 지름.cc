#include <bits/stdc++.h>

#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

//dfs 사용 풀이

typedef pii branch;

vector<vector<branch>> tree;
int visited[100001], dist[100001];    

void dfs(int node){
    if(visited[node]) return;
    visited[node] = 1;


    rep(i, 0, tree[node].size()){
        pii cur_branch = tree[node][i];
        if(visited[cur_branch.first]) continue;
        dist[cur_branch.first] = cur_branch.second + dist[node];
        dfs(cur_branch.first);
    }
}

int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    int v;
    cin >> v;
    tree.resize(v + 1);

    REP(i, 1, v){
        int s;
        cin >> s;
        while(1){
            int e, w;
            cin >> e;
            if(e == -1) break;
            cin >> w;
            tree[s].pb(make_pair(e, w));
        }
    }

    dfs(1);
    int max_idx = 1;
    REP(i, 0, v){
        if(dist[max_idx] < dist[i]) max_idx = i;
    }
    memset(visited, 0, sizeof(visited));
    memset(dist, 0, sizeof(dist));
    dfs(max_idx);
    REP(i, 0, v){
        if(dist[max_idx] < dist[i]) max_idx = i;
    }

    cout << dist[max_idx];
#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif
    return 0;
}