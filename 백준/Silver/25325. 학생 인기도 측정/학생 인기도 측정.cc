#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string students, student;
map<string, int> mp;

struct Compare{
    bool operator()(const pair<string, int>& a, const pair<string, int>& b) const{
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    }
};

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    cin.ignore();

    getline(cin, students);
    istringstream iss(students);

    while(iss >> student){
            mp[student] = 0;
        }

    rep(i, 0, n){
        getline(cin, students);
        istringstream iss(students);

        while(iss >> student){
            mp[student] += 1;
        }
    }

    vector<pair<string, int>> vec(mp.begin(), mp.end());
    sort(vec.begin(), vec.end(), Compare());

    for(auto s: vec) cout << s.first << " " << s.second << endl;

    return 0;
}