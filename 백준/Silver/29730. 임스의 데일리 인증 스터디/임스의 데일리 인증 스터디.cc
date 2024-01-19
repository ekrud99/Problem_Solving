#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, string> pis;

bool is_boj(string str){
    rep(i, 0, str.length()){
        if(str[i] == '/') return true;
    }
    return false;
}

int parse_int(string str){
    bool flag = false;
    string res = "";
    rep(i, 0, str.length()){
        if(flag) res += str[i];
        if(str[i] == '/') flag = true;
    }
    return stoi(res);
}

bool cmp(string s1, string s2){
    if(s1.length() != s2.length()) return s1.length() < s2.length();
    return s1 < s2;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    string prblm;
    vector<string> not_boj;
    vector<pis> boj;

    cin >> n;
    cin.ignore();

    rep(i, 0, n){
        getline(cin, prblm);
        if(is_boj(prblm)){
            boj.push_back(pis(parse_int(prblm), prblm));
        } 
        else not_boj.push_back(prblm);
    }

    sort(boj.begin(), boj.end());
    sort(not_boj.begin(), not_boj.end(), cmp);

    for(string p: not_boj) cout << p << endl;
    for(pis p: boj) cout << p.second << endl;

    return 0;
}