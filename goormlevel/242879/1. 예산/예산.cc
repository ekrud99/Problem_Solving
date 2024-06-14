#include <iostream>
using namespace std;
int main() {
	long long n, m;
	bool flag = true;
	cin >> n >> m;
	for(int i = 0; i < n; ++i){
		long long c, v, p;
		cin >> c >> v;
		p = c * v;
		m -= p;
		if(m < 0) flag = false;
	}
	if(flag) cout << m;
	else cout << "No";
	return 0;
}