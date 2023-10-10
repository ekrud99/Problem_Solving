#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, c;
bool is_find = false;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n >> c;
    vector<int> vec(n);

    rep(i, 0, n){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    rep(i, 0, n){
        if(vec[i] == c){
            is_find = true;
            break;
        }
        rep(j, i + 1, n){
            if(vec[i] + vec[j] == c){
                is_find = true;
                break;
            }else if(vec[i] + vec[j] > c) break;
            else{
                auto it = lower_bound(vec.begin() + j + 1, vec.end(), c - (vec[i] + vec[j]));
                if(vec[i] + vec[j] + *it == c){
                    is_find = true;
                    break;
                }
            }
        }
        if(is_find) break;
    }
    if(is_find) cout << 1;
    else cout << 0;
    return 0;
}