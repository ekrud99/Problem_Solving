#include <string>
#include <vector>
#include <queue>
#include <iostream>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

struct cmp{
    bool operator()(int a, int b){
        return a>b;
    }
};
priority_queue<int, vector<int>, cmp > q;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    int cnt = 0;
    
    rep(i, 0, score.size()){
        if(cnt == k && q.top() <= score[i]){
            cout << "s: " << score[i] << endl;
            q.pop();
            q.push(score[i]);
            cnt = k;
        }else if(cnt != k){
            q.push(score[i]);
            cnt++;    
        }
        answer.push_back(q.top());
    }
    
    while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
    
    return answer;
}