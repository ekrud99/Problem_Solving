#include <iostream>
#include <vector>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl "\n"
using namespace std;
int b, c, d, res = 0, total = 0;
int main(void){
    FAST;

    cin >> b >> c >> d;
    vector<int> burger, side, drinks;

    for(int i = 0; i < b; ++i){
        int bg;
        cin >> bg;
        burger.push_back(bg);
        total += bg;
    }

    for(int i = 0; i < c; ++i){
        int sd;
        cin >> sd;
        side.push_back(sd);
        total += sd;
    }

    for(int i = 0; i < d; ++i){
        int dk;
        cin >> dk;
        drinks.push_back(dk);
        total += dk;
    }

    sort(burger.begin(), burger.end(), greater<int>());
    sort(side.begin(), side.end(), greater<int>());
    sort(drinks.begin(), drinks.end(), greater<int>());

    int lc = min(b, c);
    lc = min(lc, d);

    for(int i = 0; i < lc; ++i){
        res += burger[i] * 0.9;
        res += side[i] * 0.9;
        res += drinks[i] * 0.9;
    }

    if(burger.size() > lc){
        for(int i = lc; i < burger.size(); ++i){
            res += burger[i];
        }
    }if(side.size() > lc){
        for(int i = lc; i < side.size(); ++i){
            res += side[i];
        }
    }if(drinks.size() > lc){
        for(int i = lc; i < drinks.size(); ++i){
            res += drinks[i];
        }
    }

    cout << total << endl;
    cout << res;

    return 0;
}
