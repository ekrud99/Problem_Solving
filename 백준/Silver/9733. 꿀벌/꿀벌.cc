#include <iostream>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

double total = 0;
string oper;
map<string, int> mp;

int main(void){
    FAST;

    //freopen("input.txt", "r", stdin);

    while(cin >> oper){
        ++total;
        ++mp[oper];
    }

    cout << fixed; cout.precision(2);

    cout << "Re " << mp["Re"] << " " << mp["Re"] / total << endl;
    cout << "Pt " << mp["Pt"] << " " << mp["Pt"] / total << endl;
    cout << "Cc " << mp["Cc"] << " " << mp["Cc"] / total << endl;
    cout << "Ea " << mp["Ea"] << " " << mp["Ea"] / total << endl;
    cout << "Tb " << mp["Tb"] << " " << mp["Tb"] / total << endl;
    cout << "Cm " << mp["Cm"] << " " << mp["Cm"] / total << endl;
    cout << "Ex " << mp["Ex"] << " " << mp["Ex"] / total << endl;
    cout << "Total " << (int)total << " " << 1.00;

    return 0;
}