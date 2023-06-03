#include <iostream>
#include <vector>
#define endl "\n" 
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i) 
using namespace std;
vector<int> parent;
int n, m, tmp;
bool flg;

int find(int node){
    if(parent[node] == node) return node;
    else return parent[node] = find(parent[node]);
}

void merge(int node1, int node2){
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

    cin >> n >> m;
    parent.resize(n + 1);

    REP(i, 0, n){
        parent[i] = i;
    }

    rep(i, 0, n){
        rep(j, 0, n){
            int flag;
            cin >> flag;
            if(flag == 1) merge(i + 1, j + 1);
        }
    }

    flg = true;
    cin >> tmp;
    int city_parent = find(tmp);

    rep(i, 0, m - 1){
        int city;
        cin >> city;
        if(city_parent != find(city)) flg = false;
    }

    if(flg) cout << "YES";
    else cout << "NO";

#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
#endif

    return 0;
    
}