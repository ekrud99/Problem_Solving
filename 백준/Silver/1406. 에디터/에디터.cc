#include <iostream>
#include <list>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

list<char> lst;
string str;
int n;
char oper, alpha;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> str >> n;

    for(char c : str) lst.push_back(c); // setting linked list

    auto cursor = lst.end(); // initial cursor

    rep(i, 0, n){
        cin >> oper;
        if(oper == 'L'){ // shift cursor to left
            if(cursor != lst.begin()) --cursor;
        }else if(oper == 'D'){ // shift cursor to right
            if(cursor != lst.end()) ++cursor;
        }else if(oper == 'B'){ // delete 
            if(cursor != lst.begin()) cursor = lst.erase(--cursor);
        }else{ // add
            cin >> alpha;
            lst.insert(cursor, alpha);
        }
    }

    for(char c : lst) cout << c;
    cout << endl;

    return 0;
}