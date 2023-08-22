#include <iostream>
#include <queue>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef struct Edge{
    int u, v, w;
    bool operator > (const Edge& tmp) const{
        return w > tmp.w;
    }
} Edge;

int n, m;
vector<int> parent;
priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

int find(int a){
    if(a == parent[a]) return a;
    return parent[a] = find(parent[a]);
}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if(a !=  b) parent[b] = a;
}

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    cin >> n >> m;
    parent.resize(n + 1);

    rep(i, 0, n + 1) parent[i] = i;

    rep(i, 0, m){
        int u, v, w;
        cin >> u >> v >> w;
        pq.push(Edge{u, v, w});
    }

    int edge_cnt = 0;
    int res = 0;
    int mn = -1;

    while(edge_cnt < n - 1){
        Edge cur = pq.top();
        pq.pop();

        if(find(cur.u) != find(cur.v)){
            uni(cur.u, cur.v);
            if(mn < cur.w) mn = cur.w;
            res += cur.w;
            ++edge_cnt;
        }
    }

    cout << res - mn;

    return 0;
}