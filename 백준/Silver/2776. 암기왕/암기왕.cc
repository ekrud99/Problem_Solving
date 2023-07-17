#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
using namespace std;

int t, n, m;
vector<int> note1;

bool b_search(int num){
    int lo = -1;
    int hi = n;
    int mid;
    while(lo + 1 < hi){
        mid = (lo + hi) / 2;

        if(note1[mid] == num) return true;
        if(note1[mid] < num) lo = mid;
        else hi = mid;
    }
    return false;
}

int main(void){
    FAST;

    cin >> t;

    rep(i, 0, t){

        cin >> n;

        note1 = {};

        rep(j, 0, n){
            int num;
            cin >> num;
            note1.push_back(num);
        }

        sort(note1.begin(), note1.end());
        
        cin >> m;

        rep(k, 0, m){
            int num;
            cin >> num;
            if(b_search(num)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}