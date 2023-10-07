#include <iostream>
#include <limits>
#include <cmath>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define INF numeric_limits<int>::max()


using namespace std;

int n;
long long coms;
int arr[1000][1000];

bool check(int t, int len){
    long long com = 0;
    rep(i, 0, len){
        rep(j, 0, len){
            if(arr[i][j] > t) com += t;
            else com += arr[i][j];
        }
    }
    // cout << "com: " << com << endl;
    if(com >= coms) return true;
    return false;
}

int b_search(){
    int hi = 10000001;
    int lo = -1;
    int mid;

    while(lo + 1 < hi){
        mid = (hi + lo) / 2;
        // cout << "mid: " << mid << endl;
        if(check(mid, n)) hi = mid;
        else lo = mid;
    }
    return hi;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        rep(j, 0, n){
            cin >> arr[i][j];
            coms += arr[i][j];
        }
    }

    coms = round(coms / 2.0);

    cout << b_search();

    return 0;
}