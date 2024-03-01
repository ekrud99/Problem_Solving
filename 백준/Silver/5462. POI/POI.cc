#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

struct Info{
    int score, problem, id;
};

int n, t, p, id, s;
int arr[2000][2000] = {0,};
map<int, int> mp;

bool cmp(Info i1, Info i2){
    if(i1.score != i2.score) return i1.score > i2.score;
    else if(i1.problem != i2.problem) return i1.problem > i2.problem;
    return i1.id < i2.id;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> t >> p;
    vector<Info> info(n);

    rep(i, 0, n){
        rep(j, 0, t){
            cin >> s;
            if(s){
                ++mp[j];
                arr[i][j] = 1;
            }
        }
    }

    rep(i, 0, n){
        info[i].id = i + 1;
        rep(j, 0, t){
            if(arr[i][j]){
                ++info[i].problem;
                info[i].score += (n - mp[j]);
            }
        }
    }

    sort(info.begin(), info.end(), cmp);

    rep(i, 0, n){
        if(info[i].id == p) cout << info[i].score << " " << i + 1;
    }

    return 0;
}