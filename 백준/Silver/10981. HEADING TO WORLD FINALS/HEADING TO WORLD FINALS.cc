#include <iostream>
#include <unordered_map>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

struct Team {
    string univ, name;
    int prob, pen;
};

int n, k, prob, pen, cnt = 0;
string univ, name;
vector<Team> vec;
unordered_map<string, bool> mp;

bool cmp(Team t1, Team t2){
    if(t1.prob != t2.prob) return t1.prob > t2.prob;
    else return t1.pen < t2.pen;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> k;

    rep(i, 0, n){
        cin >> univ >> name >> prob >> pen;
        vec.push_back(Team{univ, name, prob, pen});
    }

    sort(vec.begin(), vec.end(), cmp);

    rep(i, 0, n){
        if(mp[vec[i].univ]) continue;
        cout << vec[i].name << endl;
        mp[vec[i].univ] = true;
        ++cnt;
        if(cnt == k) break;
    }

    return 0;
}