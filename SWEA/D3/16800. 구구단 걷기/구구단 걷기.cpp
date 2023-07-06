#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define INF numeric_limits<long long>::max()
using namespace std;
typedef long long ll;

//overflow 피하려면 long long 사용해야함, INF도 마찬가지

vector<ll> factors(ll n){ // n에대한 약수 vector return
    vector<ll> factor;
    
    for (ll i = 1; i <= sqrt(n); i++) {
        if(n % i == 0){
            factor.push_back(i);
            factor.push_back(n / i);
        }
    }
    
    return factor;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        ll num;
        cin >> num;
        vector<ll> vec = factors(num);
        ll mi = INF;

        for(ll j = 0; j < vec.size() / 2; j++){ // 약수끼리 비교해서 최소거리 찾음
            ll res = (vec[j * 2] - 1) + (vec[j * 2 + 1] - 1);
            mi = min(mi, res);
        }
        cout << "#" << test_case << " " << mi << endl;
	}

	return 0;
}