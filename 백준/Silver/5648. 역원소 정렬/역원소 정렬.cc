#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;

string num;
vector<long long> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> num;

    while(cin >> num){
        reverse(num.begin(), num.end());
        vec.push_back(stoll(num));
    }

    sort(vec.begin(), vec.end());

    for(long long i: vec) cout << i << endl;

    return 0;
}