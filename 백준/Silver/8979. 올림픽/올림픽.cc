#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

struct Medal{
    int num;
    int gold, silver, bronze;
};

bool compare(Medal m1, Medal m2){
    if(m1.gold != m2.gold) return m1.gold > m2.gold;
    else if(m1.silver != m2.silver) return m1.silver > m2.silver;
    else if(m1.bronze != m2.bronze) return m1.bronze > m2.bronze;        
}

int n, k, num, g, s, b, p, res;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> k;
    vector<Medal> vec(n);

    rep(i, 0, n){
        cin >> num >> g >> s >> b;
        vec[i] = Medal{num, g, s, b};
    }

    sort(vec.begin(), vec.end(), compare);

    rep(i, 0, n){
        if(vec[i].num == k) p = i;
    }

    res = p;

    rep(i, 0, p){
        if(vec[p - i - 1].gold == vec[p].gold && vec[p - i - 1].silver == vec[p].silver && vec[p - i - 1].bronze == vec[p].bronze){
            --res;
        }else break;
    }

    cout << res + 1;

    return 0;
}