#include <iostream>
#include <map>
using namespace std;
int main(void){
    map<string, string> mp;
    string str;
    mp["SONGDO"] = "HIGHSCHOOL";
    mp["CODE"] = "MASTER";
    mp["2023"] = "0611";
    mp["ALGORITHM"] = "CONTEST";
    cin >> str;
    cout << mp[str];
    return 0;
}