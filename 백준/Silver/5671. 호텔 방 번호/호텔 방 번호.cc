#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void){
    int n, m;
    while (cin >> n >> m) {
        int res = 0;
        for (int i = n; i <= m; ++i){
            string s = to_string(i);
            if (s.length() == size(set(s.begin(), s.end()))) ++res;
        }
        cout << res << endl;
    }
}
