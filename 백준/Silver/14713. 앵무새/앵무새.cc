#include <iostream>
#include <deque>
#include <vector>
#include <sstream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;
string origin, word;
vector<deque<string>> vec;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    cin.ignore();

    rep(i, 0, n){
        string str, word;
        getline(cin, str);
        istringstream iss(str);
        deque<string> dq;

        while(iss >> word){
            dq.push_back(word);
        }
        vec.push_back(dq);
    }

    getline(cin, origin);
    istringstream iss(origin);
    bool can_make = true;

    while(iss >> word){
        bool is_find = false;
        rep(i, 0, vec.size()){
            if(!vec[i].empty() && word  == vec[i].front()){
                vec[i].pop_front();
                is_find = true;
                break;
            }
        }
        if(!is_find){
            can_make = false;
            break;
        }
    }

    rep(i, 0, vec.size()){
        if(!vec[i].empty()){
            can_make = false;
            break;
        } 
    }

    if(can_make) cout << "Possible";
    else cout << "Impossible";

    return 0;
}