#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int x, n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(cin >> x >> n){ // TC 확인
        vector<int> lego(n);
        rep(i, 0, n){ // init vector
            cin >> lego[i];
        }
        sort(lego.begin(), lego.end()); // 이분탐색 위해 정렬
        bool is_find = false; // danger 출력 위한 flag
        rep(i, 0, n){
            // 구멍 크기와 맞는 두 쌍이 있는지 찾음
            auto it = lower_bound(lego.begin() + i + 1, lego.end(), x * 10000000 - lego[i]);
            if(*it + lego[i] == x * 10000000 && lego[i] != x * 10000000 && *it != x * 10000000){
                cout << "yes" << " " << lego[i] << " " << *it << endl;
                is_find = true;
                break; // 하나만 찾고 break
            } 
        }
        if(!is_find) cout << "danger" << endl; // 못찾으면 danger 출력
    }

    return 0;
}