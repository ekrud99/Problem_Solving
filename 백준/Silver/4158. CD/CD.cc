#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(1){

        long long n, m, cd, res = 0;
        vector<long long> vec;

        cin >> n >> m;

        if(n == 0 && m == 0) return 0;

        while(n--){
            cin >> cd;
            vec.push_back(cd);
        }

        while(m--){
            cin >> cd;
            auto it = lower_bound(vec.begin(), vec.end(), cd);
            if(cd == vec[it - vec.begin()]) ++res;
        }

        cout << res << endl;;
    }

    return 0;
}