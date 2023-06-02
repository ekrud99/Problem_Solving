#include <iostream>
#include <vector>
#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) //입출력 빠르게
//cin, cout -> 사용 시 입출력은 이 두개로만
#define rep(i, a, b) for(auto i = a; i < b; ++i) // b 미포함 반복문
#define REP(i, a, b) for(auto i = a; i <= b; ++i) // b 포함 반복문
//auto 타입 추론
#define pii pair<int, int> // pair<int, int> b = make_pair(1, 2); 와 같이 쓰임, c.first = 1, c.secoond = 2도 가능
//=> pii b 가능
#define all(v) (v).begin(), (v).end()
//vector 사용 시 - vector<int> vec, vec.resize(10) 사이즈 정함, vec.begin() 첫 번째, vec.end() 마지막 원소
//sort(vec.begin(), vec.end()) -> sort(all(vec))
//vec.push_back(1) -> 위에 원소 붙임

#define pb push_back
#define INF numeric_limits<int>::max() //int형 범위의 가장 최대값 가져옴 #include<limits>
#define PIV 1 << 20

using namespace std; // std 클래스에 있는것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;

ll n, k;
vector<ll> days(n);

bool is_cash(ll k, ll n, vector<ll>& days, ll x) {
    ll current_price = 0;
    ll sum = 0;

    sum = x * (x + 1) / 2;
    
    for (int i = 0; i < n - 1; i++) {
        int piv = days[i + 1] - days[i];
        if(piv > x) piv = x;
        current_price += (piv * (2 * x + (piv - 1) * -1)) / 2;
        //cout << "x: " << x << " add: " << (piv * (2 * x + (piv - 1) * -1)) / 2 << endl;
    }

    current_price += sum;
    if (current_price >= k) {
        //cout << "curP: " << current_price << " x: " << x << endl;
            return true;
        }

    return false;
}

ll calc_x(ll n, ll k, vector<ll>& days){
    ll low = 0;
    ll high = int(1e10);
    ll result = k;

    while (low <= high) {
        ll mid = (low + high) / 2;

        if (is_cash(k, n, days, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main(){
    FAST; // 입출력 빠르게 하기 위해
#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> k;
    days.resize(n);

    rep(i, 0, n){
        cin >> days[i];
    }
    
    cout << calc_x(n, k, days);



#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    
#endif
    return 0;
}
