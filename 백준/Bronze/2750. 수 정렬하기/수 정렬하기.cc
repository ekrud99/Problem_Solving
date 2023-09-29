#include <iostream>
#include <vector>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int n;
int main(void){
    FAST;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; ++i){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for(int i : vec) cout << i << endl;
    return 0;
}
