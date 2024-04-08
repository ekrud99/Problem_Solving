#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n, t;
    vector<long long> vec;
    
    cin >> n >> t;
    
    for(int i = 0; i < n; ++i){
        long long si, li, ci;
        cin >> si >> li >> ci;
        vec.push_back(si);
        for(int j = 1; j < ci; ++j){
            si += li;
            vec.push_back(si);
        }
    }
    
    sort(vec.begin(), vec.end());
    
    auto it = lower_bound(vec.begin(), vec.end(), t);
    
    if(*it - t < 0) cout << -1;
    else cout << *it - t;

    return 0;
}