#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    string n, tmp = "", ans = "0";
    long long f, res = 2000000000;
    cin >> n >> f;

    rep(i, 0, 10){
        n[n.length() - 2] = i + '0';
        rep(j, 0, 10){
            tmp = "";
            n[n.length() - 1] = j + '0';
            if(stoll(n) % f == 0){
                tmp += i + '0';
                tmp += j + '0';
                if(res > stoll(tmp)) res = stoll(tmp);
            }
        }
    }

    if(to_string(res).length() < 2){
        ans += to_string(res);
        cout << ans;
    } 
    else cout << res;

    return 0;
}