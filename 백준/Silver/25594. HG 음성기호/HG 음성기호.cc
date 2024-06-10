#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    string hg[26] = {"aespa", "baekjoon", "cau", "debug", "edge", "firefox", "golang", "haegang", "iu", "java", "kotlin", "lol", "mips", "null", "os", "python", "query", "roka","solvedac", "tod", "unix", "virus", "whale", "xcode", "yahoo", "zebra" };
    string str, res = "";
    string tmp;
    bool flag = false;

    cin >> str;

    for(int i = 0; i < str.length();){
        tmp = hg[str[i] - 97];
        rep(j, 0, tmp.length()){
            if(tmp[j] != str[i + j]){
                cout << "ERROR!";
                return 0;
            }
        }
        res += str[i];
        i += tmp.length();
    }

    cout << "It's HG!" << endl;
    cout << res;

    return 0;
}