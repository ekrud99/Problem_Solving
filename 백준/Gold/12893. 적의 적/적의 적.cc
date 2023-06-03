#include <iostream>
#include <vector>

#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define all(v) (v).begin(), (v).end()

#define pb push_back

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n, m;
vector<int> parent;
vector<int> enemy;

int find(int node){
    if(node == parent[node]) return node;
    return parent[node] = find(parent[node]);
}

void unionn(int node1, int node2){
    node1 = find(node1);
    node2 = find(node2);
    if(node1 != node2) parent[node2] = node1;
}

int main(){
    FAST;
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif
    int res = 1;
    cin >> n >> m;
    parent.resize(n + 1);
    enemy.resize(2001);

    REP(i, 0, n){
        parent[i] = i;
    }

    rep(i, 0, m){
        int node1, node2;
        cin >> node1 >> node2;
        if(enemy[node1] == 0) enemy[node1] = node2;
        unionn(node2, enemy[node1]);
        if(enemy[node2] == 0) enemy[node2] = node1;
        unionn(node1, enemy[node2]);
        
        if(find(node1) == find(node2)) res = 0;
    }
    
    cout << res;
#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
#endif

    return 0;    
}

