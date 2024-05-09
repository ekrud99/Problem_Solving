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
    
    int n, sum = 0;
    cin >> n;
    for(int i = 5; i <= n; i *= 5) sum += (n / i);
    cout << sum;

    return 0;
}
