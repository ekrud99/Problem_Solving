#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

vector<int> budget;
int n, m, res;

int calc(int lmt){
    int res = 0;
    for(auto i : budget){
        if(i > lmt) res += lmt;
        else res += i;
    }
    return res;
}

int b_search(int hi){
    int lo =  0;
    int mid = (lo + hi) / 2, res;

    while(lo <= hi){
        mid = (lo + hi) / 2;
        int c = calc(mid);

        if(c <= m){
            lo = mid + 1;
        } 
        else{
            hi = mid - 1;
        } 

    }
    return hi;
}


int main(void){
    FAST;

    cin >> n;

    rep(i, 0, n){
        int b;
        cin >> b;
        budget.push_back(b);
    }

    sort(budget.begin(), budget.end());

    cin >> m;

    if(budget[n - 1] * n <= m){
        cout << budget[n - 1];
        return 0;
    }
    
    res = b_search(budget[budget.size() - 1]);
    cout << res;

    return 0;
}