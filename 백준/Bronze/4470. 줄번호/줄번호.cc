#include <iostream>
#include <string>
using namespace std;
int main(void){
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; ++i){
        getline(cin, str);
        cin.clear();
        cout << i + 1 << ". " << str << "\n";
    }
    return 0;
}