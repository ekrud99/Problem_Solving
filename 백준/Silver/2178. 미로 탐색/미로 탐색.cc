#include <iostream>
#include <vector>
#include <queue>

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

int n, m;
int maze[101][101];
int visited[101][101];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
queue<pii> q;

bool is_possible(int y, int x){
    return (y >= 0 && x >= 0 && y < n && x < m && maze[y][x] != 0);
}

void bfs(int y, int x){
    q.push(make_pair(y, x));

    while(!q.empty()){
        int col, row;
        col = q.front().first;
        row = q.front().second;
        q.pop();

        rep(i, 0, 4){
            int ny = col + dy[i];
            int nx = row + dx[i];
            if(!is_possible(ny, nx)) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[col][row] + 1;
            q.push(make_pair(ny, nx));
        }
        
    }

}

int main(){
    FAST; // 입출력 빠르게 하기 위해
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif
    cin >> n >> m;
    REP(i, 0, n){
        string tmp;
        cin >> tmp;
        REP(j, 0, m){
            maze[i][j] = tmp[j] - '0';
        }
    }
    visited[0][0] = 1;
    bfs(0, 0);
    cout << visited[n - 1][m - 1];

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif

    return 0;
}

