#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

vector<string> DNA; // dna 보관할 벡터

int main(void){
	FAST;

	int n, m; // n, m
	string res_dna; // 정답 dna

	cin >> n >> m;
    DNA.resize(n);

	rep(i, 0, n){ // dna 입력받아줌
		cin >> DNA[i];
	}

    rep(i, 0, m){ // 종으로 비교
        vector<int> arr(4); // 순서대로 A, C, G, T 등장한 횟수
        rep(j, 0, n){
            char c = DNA[j][i];
            if(c == 'A') ++arr[0];
            else if(c == 'C') ++arr[1];
            else if(c == 'G') ++arr[2];
            else ++arr[3];
        }
        int idx = max_element(arr.begin(), arr.end()) - arr.begin(); // 가장 많이 나온 뉴클레오티드의 idx, 이미 사전순으로 배치
        if(idx == 0) res_dna += "A";
        else if(idx == 1) res_dna += "C";
        else if(idx == 2) res_dna += "G";
        else res_dna += "T";
    }

    int cnt = 0;

    rep(i, 0, n){ // hamming distance
        rep(j, 0, m){
            if(res_dna[j] != DNA[i][j]) ++cnt;
        }
    }

    cout << res_dna << endl;
    cout << cnt;

	return 0;
}