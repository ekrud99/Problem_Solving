#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    string str;
    
    cin >> n;
    
    while(n--){
        cin >> str;
        cout << str.front() << str.back() <<endl;
    }

    return 0;
}