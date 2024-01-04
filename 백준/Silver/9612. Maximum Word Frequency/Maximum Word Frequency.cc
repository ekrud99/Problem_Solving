#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, mx = -1;
string word;
map<string, int> mp;
vector<string> vec;

bool comp(string s1, string s2){
    return s1 > s2;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> word;
        ++mp[word];
        if(mx < mp[word]) mx = mp[word];
    }

    for(auto w: mp){
        if(w.second == mx) vec.push_back(w.first);
    }

    sort(vec.begin(), vec.end(), comp);

    cout << vec.front() << " " << mx;

    return 0;
}