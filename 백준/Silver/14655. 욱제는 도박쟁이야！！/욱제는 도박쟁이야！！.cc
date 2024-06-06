#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int n, mx = 0, num;
	cin >> n;
	for(int i = 0; i < n; ++i){
	    cin >> num;
	    mx += abs(num);
	}
	cout << 2 * mx;
	return 0;
}
