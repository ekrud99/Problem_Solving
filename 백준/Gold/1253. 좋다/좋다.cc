#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef long long ll;

int n;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<int> vec(n, 0);

    rep(i, 0, n){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end()); // 정렬

    int res = 0;

    rep(i, 0, n){
        int target = vec[i]; // 판단할 수
        int left = 0;
        int right = n - 1;

        while(left < right){
            if(vec[left] + vec[right] == target){
                if(left != i && right != i){ // 서로 다른 수의 합인지 check
                    ++res;
                    break;
                }
                // 자신을 포함했다면 찾아서 바꿔줌
                else if(left == i) ++left; 
                else if(right == i) --right;
            }
            // 작으면 left증가, 크면 right감소
            else if(vec[left] + vec[right] < target) ++left;
            else --right;
        }
    }

    cout << res;

    return 0;
}
