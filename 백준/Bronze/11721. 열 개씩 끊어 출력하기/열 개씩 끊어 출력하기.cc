#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;
string str;
int cnt;
int main(void){
    FAST;
    cin >> str;
    for(int i = 0; i < str.length() ; i++){
        cout << str[i];
        cnt += 1;
        if(cnt % 10 == 0) cout << endl;
    }
    return 0;
}
