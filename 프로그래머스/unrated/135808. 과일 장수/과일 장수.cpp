#include <string>
#include <vector>
#include <iostream>
#include <queue>
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;
priority_queue<int> pq;
struct cmp{
    bool operator()(int a, int b){
        return a>b;
    }
};
priority_queue<int, vector<int>, cmp> q;
int solution(int k, int m, vector<int> score) {
    int answer = 0, sum = 0;
    
    rep(i, 0, score.size()){
        pq.push(score[i]);
    }
    
    rep(i, 0, score.size() / m){
        q = priority_queue<int, vector<int>, cmp>();
        rep(j, 0, m){
            q.push(pq.top());
            pq.pop();
        }
        sum += q.top() * m;
    }
    
    return sum;
}