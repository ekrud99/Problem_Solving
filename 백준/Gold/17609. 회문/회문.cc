#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string str;

bool is_palin(int left, int right){

    bool flag = true;

    while(left < right){
        if(str[left] == str[right]){
            ++left, --right;
        }else{
            flag = false;
            break;
        }
    }
    if(flag) return true;
    return false;
}

int check(string str){
    int left = 0, right = str.length() - 1, l = 1, r = 0, cnt = 1;
    
    if(is_palin(left, right)) return 0;

    while(left < right){
        if(str[left] == str[right]){
            ++left, --right;
            continue;
        }
        else if(is_palin(left + 1, right)) return 1;
        else if(is_palin(left, right - 1)) return 1;
        else{
            return 2;
        }
    }

    return 2;
    
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> str;
        cout << check(str) << endl;
    }

    return 0;
}
