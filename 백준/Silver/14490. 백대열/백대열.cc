#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

string str, a, b;
int n, m, g;
bool flag = false;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> str;

    rep(i, 0, str.length()){
        if(str[i] == ':'){
            flag = true;
            continue;
        }
        if(!flag) a += str[i];
        else b += str[i];
    }

    n = stoi(a); m = stoi(b);
    g = gcd(n, m);
    n /= g; m /= g;
    cout << n << ":" << m;

    return 0;
}