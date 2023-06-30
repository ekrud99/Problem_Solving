#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int n, m, cnt, i = 0, j = 0;
vector<int> vec;
int main(void){
    FAST;
    cin >> n >> m;
    vec.resize(n);
    j = n - 1;
    rep(i, 0, n){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    while(i < j){
        if(vec[i] + vec[j] < m) i++;
        else if(vec[i] + vec[j] > m) j--;
        else{
            cnt++;
            i++;
            j--;
        }
    }
    cout << cnt;
    return 0;
}