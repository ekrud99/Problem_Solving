#include <iostream>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

vector<int> parent;
int n, m, turn = 1;

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

    cin >> n >> m;
    parent.resize(n + 1);

    rep(i, 0, n + 1){
        parent[i] = i;
    }

    bool is_finished = false;

    rep(i, 0, m){
        int u, v, a, b;
        cin >> u >> v;
      
        if(find(u) == find(v)){
            is_finished = true;
            break;
        } 
        ++turn;
        uni(u, v);
    }

    if(!is_finished) turn = 0;

    cout << turn;

    return 0;
}