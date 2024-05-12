#include <iostream>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define all(v) (v).begin(), (v).end()
#define pb push_back

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;

int main(void){
    FAST;
    
    int s;
    cin >> s;
    if(s >= 90) cout << "A";
    else if(s >= 80) cout << "B";
    else if(s >= 70) cout << "C";
    else if(s >= 60) cout << "D";
    else cout << "F";

    return 0;
}
