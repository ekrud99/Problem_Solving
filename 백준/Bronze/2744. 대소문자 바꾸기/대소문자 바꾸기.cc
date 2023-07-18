#include <iostream>
#include <string>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(void){
	FAST;

	string str;
	cin >> str;

	for(int i = 0; i < str.length(); ++i){
		if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
		else str[i] -= 32;
	}

	cout << str;
}