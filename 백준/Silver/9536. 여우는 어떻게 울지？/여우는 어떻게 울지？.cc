#include <iostream>
#include <string>
#include <map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    while(t--){
        string crying, animal, goes, sound, tmp = "";
        map<string, bool> mp;
        cin.ignore();
        getline(cin, crying);

        while(1){
            cin >> animal;
            if(animal == "what"){
                cin >> animal >> animal >> animal >> animal;
                break;
            }
            else{
                cin >> goes >> sound;
                mp[sound] = true;
            }
        }

        rep(i, 0, crying.size()){ 
            if(crying[i] == ' '){
                if(!mp[tmp]){
                    cout << tmp << " ";
                }
                tmp = "";
            }
            else tmp += crying[i];
        }
        if(!mp[tmp]) cout << tmp << " ";
        cout << endl;
    }

    

    return 0;
}