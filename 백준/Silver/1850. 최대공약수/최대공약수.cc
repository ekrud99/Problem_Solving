#include <iostream>

using namespace std;
typedef long long ll;

ll a, b;

int gcd(ll a, ll b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a % b);
    }

}

int main(void){

    cin >> a >> b;
    ll res = gcd(a, b);

    while(res > 0){
        cout << 1;
        res--;
    }

    return 0;
}