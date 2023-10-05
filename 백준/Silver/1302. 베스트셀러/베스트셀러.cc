#include <iostream>
#include <algorithm>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, cnt = 1;
string book, best_seller;
unordered_map<string, int> books;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    cin >> book;
    ++books[book];
    best_seller = book;
    --n;

    while(n--){
        cin >> book;
        ++books[book];
        if(books[book] > cnt){
            cnt = books[book];
            best_seller = book;
        }else if(books[book] == cnt){
            best_seller = min(book, best_seller);
        }
    }

    cout << best_seller;

    return 0;
}