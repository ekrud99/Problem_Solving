#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string line;
int ans = 0;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    rep(i, 1, 9){
        cin >> line;
        rep(j, 1, 9){
            if(i % 2 == 0){
                if(j % 2 == 0 && line[j - 1] == 'F' ) ++ans;
            }else{
                if(j % 2 != 0 && line[j - 1] == 'F') ++ans;
            }
        }
    }

    cout << ans;

    return 0;
}