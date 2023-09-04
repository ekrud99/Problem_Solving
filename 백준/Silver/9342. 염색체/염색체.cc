#include <iostream>
#include <regex>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    regex ptrn("^[A-F]?A+F+C+[A-F]?$"); // 문제의 조건을 만족하는 정규식 패턴

    rep(i, 0, n){
        string chromo;
        cin >> chromo;
        if(regex_match(chromo, ptrn)) cout << "Infected!" << endl;
        else cout << "Good" << endl;
    }

    return 0;
}