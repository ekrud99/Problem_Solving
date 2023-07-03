#include <string>
#include <vector>
#include <iostream>
#include <stack>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

stack<int> stk; // 뽑은 인형 담을 stack

int doll(vector<vector<int>> &board, int move){ // move 열 가장 위의 인형 return
    move--;
    rep(i, 0, board.size()){
        int d = board[i][move];
        if(d != 0){
            board[i][move] = 0;
            return d;
        } 
    }
    return 0;
}

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stk.push(0); // init stack
    
    rep(i, 0, moves.size()){
        int d = doll(board, moves[i]);
        if(d != 0 && d == stk.top()){ // 뽑은 인형이 있고, stack의 top과 일치하면 pop하고 answer += 2;
            stk.pop();
            answer += 2;
            continue;
        }
        if(d != 0) stk.push(d); // stack의 top과 다르면 push
    }
    
    return answer;
}