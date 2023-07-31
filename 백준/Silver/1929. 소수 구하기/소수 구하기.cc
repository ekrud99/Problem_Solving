#include <iostream>
#include <cmath>
#include <vector>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

vector<int> numbers;

int main(void){
	FAST;

	int n, m;
	cin >> m >> n;
	numbers.resize(n + 1);

	rep(i, 2, n + 1){
		numbers[i] = i;
	}

	rep(i, 2, sqrt(n) + 1){
		if(numbers[i] == 0) continue;
		for(int j = 2 * i; j <= n; j = j + i){
			numbers[j] = 0;
		}
	}

	rep(i, m, n + 1){
		if(numbers[i] != 0) cout << numbers[i] << endl;
	}

	return 0;
}