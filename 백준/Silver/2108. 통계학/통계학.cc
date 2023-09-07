#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <cmath>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pii;
int n, sum, mx = -1;
unordered_map<int, int> mp; // key: num, value: cnt
vector<int> vec, tmp;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        int num;
        cin >> num;
        sum += num;
        ++mp[num];
        if(mp[num] > mx) mx = mp[num];
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    int res;

    for(auto i : mp){
        if(i.second == mx) pq.push(i.first);
    }

    if(pq.size() <= 1) res = pq.top();
    else{
        pq.pop();
        res = pq.top();
    }

    int avg = round((float)sum / n);
    if(avg == -0) avg = 0; 

    cout << avg << endl;
    cout << vec[n / 2] << endl;
   
    cout << res << endl;
    cout << vec.back() - vec.front();

    return 0;
}