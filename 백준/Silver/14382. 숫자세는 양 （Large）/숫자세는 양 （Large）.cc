#include <iostream>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int t, n;
string str;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> t;

    rep(i, 0, t){
        unordered_map<int, bool> mp;
        cin >> n;
        long long tmp = n;
        if(n == 0){
            cout << "Case " << "#" << i + 1 << ": INSOMNIA" << endl;
            continue;
        }

        int idx = 2;

        while(1){
            str = to_string(tmp);
            // cout << "str: " << str << endl;
            rep(j, 0, str.length()){
                // cout << "check: " << str[j] - '0' << endl;
                mp[str[j] - '0'] = true;
            }
            bool is_meet = true;
            rep(k, 0, 10){
                if(mp[k] == false){
                    is_meet = false;
                    break;
                }
            }
            if(is_meet) break;
            tmp = n * idx;
            ++idx;
        }
        cout << "Case " << "#" << i + 1 << ": " << tmp << endl;
    }

    return 0;
}