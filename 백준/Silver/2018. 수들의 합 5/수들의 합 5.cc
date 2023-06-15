#include <iostream>

#define FAST ios_base::sync_with_stdio; cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int n, s, e, sum, cnt;

int main(void){
    FAST;
    s = 1;
    e = 1;
    sum = 1;
    cnt = 1;
    cin >> n;
    
    while(e != n){
        if(sum == n){
            cnt++;
            e++;
            sum += e;
        }
        if(sum > n){
            sum -= s;
            s++;
        }else{
            e++;
            sum += e;
        }
    }

    cout << cnt;

    return 0;
}