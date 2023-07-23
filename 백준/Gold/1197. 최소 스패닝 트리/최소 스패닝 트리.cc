#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef struct Edge{
	int u;
	int v;
	int w;

	bool operator > (const Edge& tmp) const{
		return w > tmp.w;
	}
} Edge;

int v, e;
int parent[10001];

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

int main(void){
	FAST;
	
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
	
	cin >> v >> e;

    rep(i, 0, v + 1){
        parent[i] = i;
    }

    rep(i, 0, e){
        int U, V, W;
        cin >> U >> V >> W;
        pq.push(Edge{U, V, W});
    }

    int edge_cnt = 0, cost = 0;

    while(edge_cnt < v - 1){
        Edge cur = pq.top();
        pq.pop();
        if(find(cur.u) != find(cur.v)){
            cost += cur.w;
            uni(cur.u, cur.v);
            ++edge_cnt;
        }
    }

    cout << cost;

	return 0;
}
