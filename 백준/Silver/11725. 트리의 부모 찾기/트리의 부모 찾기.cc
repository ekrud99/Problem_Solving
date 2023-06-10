#include <iostream>
#include <vector>

#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define pb push_back

using namespace std;
int n;
vector<vector<int>> tree;
int visited[100001], parent[100001];

void dfs(int node){
    visited[node] = true;

    rep(i, 0, tree[node].size()){
        int next_node = tree[node][i];
        if(!visited[next_node]){
            parent[next_node] = node;
            dfs(next_node);
        }
    }
}

int main(){
    FAST;

#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n;
    tree.resize(n + 1);
    
    REP(i, 0, n){
        int s, e;
        cin >> s >> e;
        tree[s].pb(e);
        tree[e].pb(s);
    }

    dfs(1);

    REP(i, 2, n){
        cout << parent[i] << endl;
    }

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}