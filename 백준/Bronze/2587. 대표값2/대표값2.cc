#include <iostream>
#include <vector>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int main(void){
    FAST;
    // freopen("input.txt", "r", stdin);
    int num, sum = 0, cnt = 0;
    vector<int> vec;
    while(cin >> num){
        sum += num;
        ++cnt;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    cout << sum / cnt << endl;
    cout << vec[cnt / 2];
    return 0;
}
