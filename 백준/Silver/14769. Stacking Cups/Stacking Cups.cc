#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, string> pis;

bool is_int(string str){
    for(char c: str) if(!isdigit(c)) return false;
    return true;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    string input1, input2;
    vector<pis> vec;

    cin >> n;

    rep(i, 0, n){
        cin >> input1 >> input2;
        if(is_int(input1)){ // 지름, 색
            vec.push_back(pis(stoi(input1), input2));
        }
        else{ // 색, 반지름
            vec.push_back(pis(2 * stoi(input2), input1));
        }
    }

    sort(vec.begin(), vec.end());

    for(pis p: vec) cout << p.second << endl;

    return 0;
}