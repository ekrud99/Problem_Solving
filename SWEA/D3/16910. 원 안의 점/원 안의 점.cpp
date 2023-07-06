#include<iostream>

using namespace std;

int calc(int num){ // x, y 축 제외 각 사분면에 있는 정수 좌표 개수 return
    int cnt = 0;
	for(int i = 1; i <= num; i++){ 
    	for(int j = 1; j <= num; j++){
            if((i * i) + (j * j) <= (num * num)){
            	cnt++;
            }
        }
    }
    return cnt;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int num, res;
        cin >> num;
 		res = (4 * calc(num)) + (4 * num) + 1; // 4개의 사분면이므로 *4, x / y 축 위의 점 * 4, (0, 0) 은 항상 포함 + 1
        cout << "#" << test_case << " " << res << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}