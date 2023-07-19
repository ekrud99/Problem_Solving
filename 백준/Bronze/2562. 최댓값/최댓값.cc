#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int main(void){
	FAST;

	map<int, int> mp;
	int mx = -1;

	rep(i, 0, 9){
		int num;
		cin >> num;
		if(mx < num) mx = num;
		mp[num] = i + 1;
	}

	cout << mx << endl;
	cout << mp[mx];

	return 0;
}