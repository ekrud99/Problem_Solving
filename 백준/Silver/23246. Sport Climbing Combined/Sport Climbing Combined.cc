#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

struct score {
    int sum, mul;
    int num;
};

int n, num, l, s, b;

bool cmp(score s1, score s2){
    if(s1.mul != s2.mul) return s1.mul < s2.mul;
    else if(s1.sum != s2.sum) return s1.sum < s2.sum;
    else return s1.num < s2.num;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<score> vec(n);

    rep(i, 0, n){
        cin >> num >> l >> s >> b;
        vec[i] = score{l + s + b, l * s * b, num};
    }

    sort(vec.begin(), vec.end(), cmp);

    rep(i, 0, 3) cout << vec[i].num << " ";

    return 0;
}