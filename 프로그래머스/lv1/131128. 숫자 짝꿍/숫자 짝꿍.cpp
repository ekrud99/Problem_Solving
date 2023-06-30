#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;
map<int, int> mp_x, mp_y; // 숫자, 등장 횟수
int arr[10]; // idx에 해당하는 숫자가 arr[idx]번 공통으로 등장
string solution(string X, string Y) {
    string answer = "";
    int len = X.length() > Y.length() ? X.length() : Y.length();
    
    rep(i, 0, X.length()){
        int n = X[i] - '0';
        mp_x[n] += 1;
    }
    
    rep(i, 0, Y.length()){
        int n = Y[i] - '0';
        mp_y[n] += 1;
    }
    
    rep(i, 0, 10){
        if(mp_x[i] && mp_y[i]){
            cout << "pass " << i << endl;
            arr[i] = mp_x[i] < mp_y[i] ? mp_x[i] : mp_y[i];
        }
    }
    
    rep(i, 0, 10){
        cout << arr[i] << " ";
    }
    
    for(int i = 9; i >= 0; i--){
        if(!arr[i]) continue;
        for(int j = 0; j < arr[i]; j++){
            answer += i + '0';
        }
    }
    
    if(answer == "") answer += "-1";
    if(answer[0] == '0') answer = "0";
    
    return answer;
}