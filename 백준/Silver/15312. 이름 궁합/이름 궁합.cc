#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string s1, s2, comb, res;
int alpha[26] = {3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};

int main(void){
    FAST;

    cin >> s1 >> s2;
    rep(i, 0, s1.size()){
        comb += s1[i];
        comb += s2[i];
    }

    rep(i, 0, comb.size()) comb[i] = alpha[comb[i] - 'A'] + '0';

    while(1){
        rep(i, 0, comb.size() - 1){
            if((comb[i] - '0' + comb[i + 1] - '0') > 9) comb[i] = (comb[i] - '0' + comb[i + 1] - '0') % 10 + '0';
            else comb[i] = (comb[i] - '0' + comb[i + 1] - '0') + '0';
        }
        comb.pop_back();
        if(comb.size() == 2) break;
    }
    
    cout << comb[0] << comb[1] << endl;

    return 0;
}