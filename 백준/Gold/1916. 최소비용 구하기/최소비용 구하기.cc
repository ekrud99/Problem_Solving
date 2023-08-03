#include <iostream>
#include <vector>
#include <queue>
#include <limits>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define INF numeric_limits<int>::max()

using namespace std;

typedef pair<int, int> edge; // u, w
typedef pair<int, int> pii; // w, u
int n, m, s, d;
vector<int> dist;
vector<bool> visited;
vector<vector<edge>> graph;
priority_queue<pii, vector<pii>, greater<pii>> pq;

int main(void){
    FAST;

    cin >> n >> m;

    graph.resize(n + 1);
    visited.resize(n + 1);
    dist.resize(n + 1);

    fill(dist.begin(), dist.end(), INF);
    visited = {false, };

    rep(i, 0, m){
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back(edge(v, w));
    }

    cin >> s >> d; // 출발, 도착 node

    pq.push(pii(0, s)); // 출발 node push
    dist[s] = 0;

    while(!pq.empty()){
        pii cur = pq.top();
        pq.pop();
        int cur_node = cur.second;
        if(visited[cur_node]) continue;
        visited[cur_node] = true;

        rep(i, 0, graph[cur_node].size()){
            edge tmp = graph[cur_node][i];
            int next_node = tmp.first;
            int weight = tmp.second;

            if(dist[next_node] > dist[cur_node] + weight){
                dist[next_node] = weight + dist[cur_node];
                pq.push(pii(dist[next_node], next_node));
            }
        }
    }

    cout << dist[d]; // 도착 node 출력


    return 0;
}