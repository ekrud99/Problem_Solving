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
    
    int t, n, cnt_b, cnt_w;
    string str1, str2;

    cin >> t;

    rep(i, 0, t){
        cin >> n >> str1 >> str2;
        cnt_b = 0; cnt_w = 0;
        rep(i, 0, n){
            if(str1[i] != str2[i]){
                if(str1[i] == 'W') ++cnt_w;
                else ++cnt_b;
            }
        }
        if(cnt_b < cnt_w) cout << cnt_w << endl;
        else cout << cnt_b << endl;
    }

    return 0;
}
