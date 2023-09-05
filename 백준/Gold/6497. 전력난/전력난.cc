#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

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

int n, m, edge_cnt, cost, total;
vector<int> parent, ans;
priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

int find(int a){
    if(a == parent[a]) return a;
    return parent[a] = find(parent[a]);
}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b) parent[b] = a;
}

void init(){
    total = 0;
    edge_cnt = 0;
    cost = 0;
    parent.clear();
    while (!pq.empty()) pq.pop();
}

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    while(1){
        init();
        cin >> m >> n;
        if(m == 0 && n == 0) break;

        parent.resize(m);
        

        rep(i, 0, m) parent[i] = i;

        rep(i, 0, n){
            int u, v, w;
            cin >> u >> v >> w;
            total += w;
            pq.push(Edge{u, v, w});
        }
        while (edge_cnt < m - 1) {
            Edge cur = pq.top();
            pq.pop();
            if (find(cur.u) != find(cur.v)) {
                uni(cur.u, cur.v);
                cost += cur.w;
                ++edge_cnt;
            }
        }

        cout << total - cost << endl;
    }

    return 0;
}