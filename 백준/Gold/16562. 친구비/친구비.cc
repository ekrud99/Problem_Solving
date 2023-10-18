#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, m, k, a, b, money[10001], p[10001], visited[10001] = {0, }, res;

int find(int a){
    if(a == p[a]) return a;
    return p[a] = find(p[a]);
}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if(a  != b){
        if(money[a] <= money[b]) p[b] = a;
        else p[a] = b;
    } 
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> m >> k;

    rep(i, 1, n + 1) p[i] = i;
    rep(i, 1, n + 1) cin >> money[i];
    
    rep(i, 0, m){
        cin >> a >> b;
        uni(a, b);
    }

    rep(i, 1, n + 1){
        if(visited[find(i)]) continue;
        res += money[find(i)];
        visited[find(i)] = 1;
    }

    if(res > k) cout << "Oh no";
    else cout << res;

    return 0;
}
