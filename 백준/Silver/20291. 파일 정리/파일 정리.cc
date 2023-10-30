#include <iostream>
#include <map>
#include <string>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string check(string file){
    int pos = file.find(".");
    return file.substr(pos + 1, file.length() - pos);
}

int n;
string file;
map<string, int> files;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> file;
        ++files[check(file)];
    }

    for(auto file : files) cout << file.first << " " << file.second << endl;

    return 0;
}