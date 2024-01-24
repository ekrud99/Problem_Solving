#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

int main(void) {
	
	int n, s, e, res = 0;
	
	cin >> n;
	vector<pii> vec(n);
	
	for(int i = 0; i < n; ++i){
		cin >> s >> e;
		vec[i] = pii(s, e);
	}
	
	sort(vec.begin(), vec.end());
	
	for(int i = 0; i < n; ++i){
		res = max(vec[i].first, res);
		res += vec[i].second;
	}
	
	cout << res;
	
	return 0;
}