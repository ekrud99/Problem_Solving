#include <iostream>
#include <vector>
#include <limits>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define pb push_back
#define INF numeric_limits<int>::max()

using namespace std;

int V, E, k;
typedef pair<int, int> edge; // u, weight
typedef pair<int, int> pii; // weight, u / 우선순위 큐에 사용할 pair
vector<int> dist; // 각 node까지의 최단거리
vector<bool> visited; 
vector<vector<edge>> graph; // 방향 그래프를 인접 리스트 형태로
priority_queue<pii, vector<pii>, greater<pii>> pq; // min heap의 형태로 선언

int main(void){
    FAST;

    cin >> V >> E >> k; // 정점 개수, 간선 개수, 시작 정점

    dist.resize(V + 1);
    visited.resize(V + 1);
    graph.resize(V + 1);

    fill(dist.begin(), dist.end(), INF); // dist의 초기값은 INF
    visited = {false, };

    rep(i, 0, E){ // 그래프를 인접리스트로 표현
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].pb(edge(v, w));
    }

    pq.push(pii(0, k)); // 시작 node push, pii.first가 0이므로 가장 높은 우선순위를 가짐
    dist[k] = 0; // 자신까지의 거리는 0

    while(!pq.empty()){
        pii cur = pq.top();
        pq.pop();
        int cur_node = cur.second;
        if(visited[cur_node]) continue; // 이미 방문했다면 continue
        visited[cur_node] = true;

        rep(i, 0, graph[cur_node].size()){ // 선택된 node 기준 dist 갱신
            edge tmp = graph[cur_node][i];
            int next_node = tmp.first;
            int weight = tmp.second;

            if(dist[next_node] > dist[cur_node] + weight){ // 기존 dist 보다 선택된 node 거쳐가는 경우가 이득인 경우 갱신
                dist[next_node] = weight + dist[cur_node];
                pq.push(pii(dist[next_node], next_node)); // 갱신했으면 pq에 push
            }
        }
    }

    rep(i, 1, V + 1){ // 경로가 존재하면 거리 출력, 아니면 INF 출력 
        if(visited[i]) cout << dist[i] << endl;
        else cout << "INF" << endl;
    }

    return 0;
}