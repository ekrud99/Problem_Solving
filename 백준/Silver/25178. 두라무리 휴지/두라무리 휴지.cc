#include <iostream>
#include <string>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    string str1, str2, tmp1, tmp2;

    cin >> n;
    cin >> str1 >> str2;
    tmp1 = str1; tmp2 = str2;

    if(str1.front() != str2.front() || str1.back() != str2.back()){
        cout << "NO";
        return 0;
    }

    sort(tmp1.begin(), tmp1.end());
    sort(tmp2.begin(), tmp2.end());

    if(tmp1 != tmp2){
        cout << "NO";
        return 0;
    }

    tmp1 = ""; tmp2 = "";

    rep(i, 0, n){
        if(str1[i] != 'a' && str1[i] != 'e' && str1[i] != 'i' && str1[i] != 'o' && str1[i] != 'u'){
            tmp1 += str1[i];         
        }
        if(str2[i] != 'a' && str2[i] != 'e' && str2[i] != 'i' && str2[i] != 'o' && str2[i] != 'u'){
            tmp2 += str2[i];         
        }
    }

    if(tmp1 != tmp2){
        cout << "NO";
        return 0;
    }

    cout << "YES";

    return 0;
}

