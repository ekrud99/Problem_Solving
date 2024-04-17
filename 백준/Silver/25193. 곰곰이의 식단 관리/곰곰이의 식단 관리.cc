#include <iostream>
#include <string>

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
    
    int n, cnt = 0;
    string s;

    cin >> n >> s;

    rep(i, 0, s.length()) if(s[i] != 'C') ++cnt;

    cout << n / (cnt + 1);

    return 0;
}