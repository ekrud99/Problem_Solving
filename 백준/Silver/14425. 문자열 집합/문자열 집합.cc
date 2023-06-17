#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n";

using namespace std;

int n, m, res;
vector<string> ss, target;

bool b_search(string str){
    int lo = 0;
    int hi = ss.size() - 1;
    int mid;

    while(lo <= hi){
        mid = (lo  + hi) / 2;
        if(ss[mid] == str) return true;
        else if(ss[mid] > str) hi = mid - 1;
        else lo = mid + 1;
    }
    return false;
}

int main(void){
    FAST;

    cin >> n >> m;

    rep(i, 0, n){
        string str;
        cin >> str;
        ss.push_back(str);
    }

    sort(ss.begin(), ss.end());

    rep(i, 0, m){
        string str;
        cin >> str;
        if(b_search(str)) res += 1;
    }

    cout << res;

    return 0;
}