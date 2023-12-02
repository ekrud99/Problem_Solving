#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, oper, num, w;
map<int, int> locker;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> oper;
        if(oper == 1){
            cin >> num >> w;
            locker[w] = num;
        }else{
            cin >> w;
            cout << locker[w] << endl;
        }
    }

    return 0;
}