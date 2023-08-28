#include <iostream>
#include <queue>
#include <algorithm>
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

vector<int> parent;

priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

int find(int a){
    if(a == parent[a]) return a;
    return parent[a] = find(parent[a]);
}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
        parent[b] = a;
    }
}

int n, cost, edge_cnt;
long long res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    parent.resize(n + 1);

    rep(i, 0, n + 1) parent[i] = i;

    rep(i, 1, n + 1){
        rep(j, 1, n + 1){
            cin >> cost;
            if(j <= i || i == n) continue;
            pq.push(Edge{i, j, cost});
        }
    }

    while(edge_cnt < n - 1){
        Edge cur = pq.top();
        pq.pop();
        if(find(cur.u) != find(cur.v)){
            res += cur.w;
            uni(cur.u, cur.v);
            ++edge_cnt;
        }
    }

    cout << res;

    return 0;
}