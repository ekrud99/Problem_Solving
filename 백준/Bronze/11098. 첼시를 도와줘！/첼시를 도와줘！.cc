#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int n, p, price, exp_price;
string name, exp_name;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> p;
        exp_price = -1;
        rep(j, 0, p){
            cin >> price >> name;
            if(price > exp_price){
                exp_price = price;
                exp_name = name;
            }
        }
        cout << exp_name << endl;
    }

    return 0;
}