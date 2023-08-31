#include <iostream>
#include <deque>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, card = 1;
deque<int> cards;
vector<int> tricks;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    tricks.resize(n);

    rep(i, 0, n) cin >> tricks[i]; // 기술 기록

    rep(i, 1, n + 1){ // 카드 복원
        if(tricks[n - i] == 1) cards.push_back(card); // 1이면 맨 뒤에 추가
        else if(tricks[n - i] == 2){ // 2이면 뒤에서 두번째 추가
            int tmp = cards.back();
            cards.pop_back();
            cards.push_back(card);
            cards.push_back(tmp);
        }else cards.push_front(card); // 3이면 맨 앞에 추가
        ++card;
    }

    for(auto it = cards.rbegin(); it != cards.rend(); ++it) cout << *it << " ";

    return 0;
}