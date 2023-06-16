#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;
long long n, ma;
long long sum;
int main(void){
    cin >> n;
    cin >> ma;
    sum += ma;
    for(int i = 0; i < n - 1; i++){
        long long s;
        cin >> s;
        sum += s;
        if(ma < s) ma = s;
    }
   
    double res = sum * 100.0 / ma / n;
    cout << res;
    return 0;
}