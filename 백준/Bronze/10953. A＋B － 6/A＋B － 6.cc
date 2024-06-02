#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string str;
    int t, a, b;    
    
    cin >> t;
    
    while(t--){
        cin >> str;
        a = str[0] - '0';
        b = str[2] - '0';
        cout << a + b << "\n";
    }

    return 0;
}