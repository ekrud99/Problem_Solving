#include <iostream>
#include <queue>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, a, b, c;
int parent[1001];


typedef struct Edge{
	int u, v, w;

	bool operator > (const Edge& tmp) const{
		return w > tmp.w;
	}
} Edge;

int find(int a){
	if(a == parent[a]) return a;
	return parent[a] = find(parent[a]);
}

void uni(int a, int b){
	a = find(a);
	b = find(b);

	if(a != b) parent[b] = a;
}

int main(void){
	FAST;

	cin >> n >> m;

	priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

	rep(i, 1, n + 1){
		parent[i] = i;
	}

	rep(i, 0, m){
		cin >> a >> b >> c;
		pq.push(Edge{a, b, c});
	}

	int res = 0;
	int edge_cnt = 0;

	while(edge_cnt < n - 1){
		Edge now = pq.top();
		pq.pop();

		if(find(now.u) != find(now.v)){
            res += now.w;
            ++edge_cnt;
            uni(now.u, now.v);
        }
	}

    cout << res;

	return 0;
}