#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string l, r;
long long cnt;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> l >> r;

    // 자릿수 바뀌면 무조건 8이 하나도 안들어가는 수 존재
    if(r.length() > l.length()){ 
        cout << 0;
        return 0;
    }

    rep(i, 0, l.length()){
        if(l[i] != r[i]) break; // 앞자리 바뀌면 종료
        else if(l[i] == '8' && r[i] == '8') ++cnt; // L, R 모두 8이면 무조건 8 하나 존재하므로 추가
    } 

    cout << cnt;

    return 0;
}