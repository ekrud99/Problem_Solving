#include <iostream>
#include <set>

using namespace std;

int main() {
    
    int t, n;
    
    cin >> t;
    
    while(t--){
        set<string> s;
        string city;
        cin >> n;
        while(n--){
            cin >> city;
            s.insert(city);
        }
        cout << s.size() << endl;
    }

    return 0;
}