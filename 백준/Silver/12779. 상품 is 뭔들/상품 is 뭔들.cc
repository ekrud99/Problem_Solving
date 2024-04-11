#include <iostream>
#include <cmath>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

ll ggcd(ll a, ll b){
    if(b == 0) return a;
    return ggcd(b, a % b);
}

ll find_sqrt(ll x){ 
    ll temp = 0; 
    while(temp*temp <= x) 
        temp++; 

    return temp-1;
}

int main(void){
    FAST;
    
    ll a, b, cnt = 0, s, m, g;
    cin >> a >> b;

    s = find_sqrt(b) - find_sqrt(a); m = b - a;
    g = ggcd(s, m);

    if(s == 0) cout << 0 << endl;
    else cout << s / g << "/" << m / g;

    return 0;
}