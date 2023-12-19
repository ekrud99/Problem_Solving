#include <iostream>
#include <map>
#include <limits>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define MAX numeric_limits<long long>::max()

using namespace std;

int n, mx = -1;
long long card, ans = -1;
map<long long, int> cards;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    while(n--){
        cin >> card;
        ++cards[card];
        if(mx < cards[card]){
            mx = cards[card];
            ans = card;
        }else if(mx == cards[card]){
            ans = ans < card ? ans : card;
        }
    }

    cout << ans;

    return 0;
}