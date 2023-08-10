#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int t, n;
bool is_reversed = false, is_error = false;
string p, sqc;

deque<int> dq;

void print_ans(){ // 정답 출력 함수, [1,2,3] 이런식으로 출력해야 함
    string ans;
    ans += "[";

    for(int i : dq){
        ans += to_string(i);
        ans += ',';
    }
    if(ans.back() != '[') ans.pop_back(); // 빈 배열이 아닌 경우에 뒤에 붙은 콤마를 떼줌
    ans += ']';
    cout << ans << endl;
}

void parse(string str){ // [1,2,3] 의 형태로 전달받은 수열을 파싱해서 deque에 넣어줌
    string prs;
    int i;
    for(char c : str){
        if(c != '[' && c != ']' && c && ',') prs += c;
        if(c == ',' || c == ']'){
            i = stoi(prs);
            dq.push_back(i);
            prs = "";
        }
    }
}

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    cin >> t;

    rep(i, 0, t){

        dq.clear();
        is_error = false;
        is_reversed = false;
        cin >> p >> n >> sqc;

        if(sqc.length() >= 3) parse(sqc);

        for(char oper : p){
            if(oper == 'R') is_reversed = (!is_reversed); // 뒤집혔는지 체크
            else if(oper == 'D'){
                if(dq.size() <= 0){ // deque에 아무것도 없는데 D 명령이 들어오면 error
                    is_error = true;
                    break;
                }
                if(is_reversed) dq.pop_back(); // 뒤집혔으면 뒤에서 지우고
                else dq.pop_front(); // 아니면 앞에서 지움
            }
        }
        if(is_error){ // 에러 여부에 따라 error 출력
            cout << "error" << endl;
            continue;
        }
        if(is_reversed) reverse(dq.begin(), dq.end()); // 뒤집혔다면 뒤집어줌
        print_ans(); // 정답 출력   
    }

    return 0;
}