#include <iostream>
#include <vector>

#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)

#define pii pair<int, int>

#define all(v) (v).begin(), (v).end()
#define pb push_back
#define INF numeric_limits<int>::max()
#define PIV 1 << 20

using namespace std; // std 클래스에 있는것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;

int n, parent, root, search_point, leaf_cnt;
int visited[51];
vector<vector<int>> tree;
vector<int> parents;

void dfs(int node){
    visited[node] = 1;
    int cnt = 0;
    rep(i, 0, tree[node].size()){
        int next_node = tree[node][i];
        if(!visited[next_node] && next_node != search_point){
            cnt += 1;
            dfs(next_node);
        }
    }
    if(cnt == 0) leaf_cnt += 1;
}

int main(){
    FAST;
#ifndef ONLINE_JUDGE
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n;
    tree.resize(n);

    rep(i, 0, n){
        cin >> parent;
        if(parent == -1){
            root = i;
            continue;
        }
        tree[i].pb(parent);
        tree[parent].pb(i);
    }

    cin >> search_point;

    if(root == search_point) cout << 0;
    else{
        dfs(root);
        cout << leaf_cnt;
    }

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}