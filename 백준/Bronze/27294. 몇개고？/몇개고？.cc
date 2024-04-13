#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(void){
    FAST;
    
    int t, s;
    cin >> t >> s;

    if(s || (t <= 11 || t > 16)) cout << 280;
    else if((t >= 12 && t <= 16) && !s) cout << 320;

    return 0;
}
