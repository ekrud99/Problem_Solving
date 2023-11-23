#include <iostream>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
double num;
priority_queue<double, vector<double>, greater<double>> pq;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    rep(i, 0, n){
        cin >> num;
        pq.push(num);
    } 

    cout << fixed;
    cout.precision(3);

    rep(i, 0, 7){
        num = pq.top();
        cout << num << endl;
        pq.pop();
    }

    return 0;
}