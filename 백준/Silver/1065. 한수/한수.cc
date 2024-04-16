#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int check(int n){
    int cnt, a, b, c;
    if(n < 100) cnt = n;
    else{
        cnt = 99;

        rep(i, 100, n + 1){
            a = i % 10;
            b = (i % 100) / 10;
            c = i / 100;
            if(c - b == b - a) ++cnt;
        }
    }
    return cnt;
}

int main(void){
    FAST;
    
    int n;
    cin >> n;

    cout << check(n);

    return 0;
}
