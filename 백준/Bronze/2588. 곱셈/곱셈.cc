#include <iostream>
#include <string>

#define rep(i ,a, b) for(auto i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    int s1, s2, res;

    cin >> s1 >> s2;

    res = s1 * s2;

    cout << s1 * (s2 % 10) << endl;
    s2 /= 10;
    cout << s1 * (s2 % 10) << endl;
    s2 /= 10;
    cout << s1 * s2 << endl;
    cout << res;

    return 0;
}
