#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string str, ring;
int n, ans = 0;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> str >> n;

    while(n--){
        cin >> ring;
        ring += ring;
        if(ring.find(str) != string::npos) ++ans;
    }

    cout << ans;

    return 0;
}