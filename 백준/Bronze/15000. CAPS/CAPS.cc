#include <iostream>

using namespace std;

int main() {
    
    string str;
    
    cin >> str;
    
    for(int i = 0; i < str.length(); ++i){
        char c = str[i] - 32;
        cout << c;
    }
    
    return 0;
}