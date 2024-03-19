#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;

int main(void){
    FAST;
    
    int t, n;

    cin >> t;

    while(t--){
        string file;
        int id, res;
        cin >> n;
        vector<int> vec;
        map<string, bool> check;
        map<string, int> mp;

        while(n--){
            cin >> file >> id;
            if(check[file]){
                if(mp[file] > id) mp[file] = id; 
            }
            else{
                check[file] = true;
                mp[file] = id;
            }
        }

        for(auto i: mp){
            vec.push_back(i.second);
        } 
        sort(vec.begin(), vec.end());
        for(int i: vec) cout << i << " ";
        cout << endl;

    }

    return 0;
}