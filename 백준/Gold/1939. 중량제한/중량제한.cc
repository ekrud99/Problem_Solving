#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) //입출력 빠르게
//cin, cout -> 사용 시 입출력은 이 두개로만
#define rep(i, a, b) for(auto i = a; i < b; ++i) // b 미포함 반복문
#define REP(i, a, b) for(auto i = a; i <= b; ++i) // b 포함 반복문
//auto 타입 추론
#define pii pair<int, int> // pair<int, int> b = make_pair(1, 2); 와 같이 쓰임, c.first = 1, c.secoond = 2도 가능
//=> pii b 가능
#define all(v) (v).begin(), (v).end()
//vector 사용 시 - vector<int> vec, vec.resize(10) 사이즈 정함, vec.begin() 첫 번째, vec.end() 마지막 원소
//sort(vec.begin(), vec.end()) -> sort(all(vec))
//vec.push_back(1) -> 위에 원소 붙임

#define pb push_back
#define INF numeric_limits<int>::max() //int형 범위의 가장 최대값 가져옴 #include<limits>
#define PIV 1 << 20

using namespace std; // std 클래스에 있는것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;

int n, m, i1, i2, n1, n2, w;
ll total_weight = 0;
int visited[10001];

struct pos{
    int to;
    int w;
};

vector<pos> grp[10001];

bool bfs(int start, int wgt){
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x == i2) return true;

        rep(i, 0, grp[x].size()){
            int y = grp[x][i].to;
            
            if(visited[y]) continue;
            if(grp[x][i].w < wgt) continue;
            q.push(y);
            visited[y] = 1;
        }
    }
    return false;
}

ll p_search(){
    ll low = 1;
    ll high = ll(1e9);
    ll result = 0;
    while(low <= high){
        ll mid = (low + high) / 2;
        memset(visited, 0, sizeof(visited));
        if (!bfs(i1, mid)) {
            high = mid - 1;
        } else {
            low = mid + 1;
            result = mid;
        }
    }

    return result;
}



int main(){
    FAST;

    #ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
    #endif

    cin >> n >> m;
    rep(i, 0, m){
        cin >> n1 >> n2 >> w;
        grp[n1].pb(pos{n2, w});
        grp[n2].pb(pos{n1, w});
    }
    cin >> i1 >> i2;
    
    ll res = p_search();
    cout << res;

    #ifndef ONLINE_JUDGE
        cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
        
    #endif

    return 0;   
    
}