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

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    string s, t, a, b, str1, str2;

    cin >> s >> t;

    if(s.length() >= t.length()){
        a = s;
        b = t;
    }
    else{
        a = t;
        b = s;
    }

    int lc = lcm(a.length(), b.length());

    while(1){
        if(str1.length() == lc) break;
        str1 += b;
    }

    while(1){
        if(str2.length() == lc) break;
        str2 += a;
    }

    if(str1 == str2) cout << 1;
    else cout << 0;

    return 0;
}