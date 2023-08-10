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

void print_ans(deque<int> dq){
    string ans;
    ans += "[";

    for(int i : dq){
        ans += to_string(i);
        ans += ',';
    }
    if(ans.back() != '[') ans.pop_back();
    ans += ']';
    cout << ans << endl;
}

void parse(string str){
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
            if(oper == 'R') is_reversed = (!is_reversed);
            else if(oper == 'D'){
                if(dq.size() <= 0){
                    is_error = true;
                    break;
                }
                if(is_reversed) dq.pop_back();
                else dq.pop_front();
            }
        }
        if(is_error){
            cout << "error" << endl;
            continue;
        }
        if(is_reversed) reverse(dq.begin(), dq.end());
        print_ans(dq);              
    }

    return 0;
}