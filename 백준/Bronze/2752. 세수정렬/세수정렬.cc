#include <iostream>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int main(void){
    FAST;
    vector<int> vec;
    for(int i = 0; i < 3; ++i){
        int n;
        cin >> n;
        vec.push_back(n);
    }
    sort(vec.begin(), vec.end());
    for(int i : vec){
        cout << i << " ";
    }
    return 0;
}