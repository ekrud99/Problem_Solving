#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, res, l, r;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<int> solution(n);

    rep(i, 0, n){
        cin >> solution[i];
    }

    sort(solution.begin(), solution.end());

    int left = 0, right = solution.size() - 1;
    res = abs(solution[left] + solution[right]);
    l = solution[left]; r = solution[right];

    while(left + 1 < right){
        if((solution[left] + solution[right]) > 0) --right;
        else ++left;
        // res = min(res, abs(solution[left] + solution[right]));
        if(res > abs(solution[left] + solution[right])){
            res = abs(solution[left] + solution[right]);
            l = solution[left]; r = solution[right];
        }
        // cout << "left : " << left << " right: " << right << " res: " << res << endl;
    }

    cout << l << " " << r;

    return 0;
}

/*
-2 4 -99 -1 98
-99 -2 -1 4 98
*/