#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string n;
vector<int> vec;
int sum = 0;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n.length()){
        int num = stoi(n.substr(i, 1));
        sum += num;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    if(vec[0] != 0) cout << -1;
    else if(sum % 3 == 0 && vec[0] == 0){
        for(int i = vec.size() - 1; i >= 0; --i){
            cout << vec[i];
        }
    }else cout << -1;

    return 0;
}