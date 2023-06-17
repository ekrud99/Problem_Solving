#include <iostream>
#include <string>
#include <vector>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int n, m, mid, pre;
vector<int> power, arr;
vector<string> title;
int main(void){
    FAST;
    cin >> n >> m;
    arr.resize(m);
    // power.resize(n);
    // title.resize(n);
    cin.ignore();
    for(int i = 0; i < n ; i ++){
        string str;
        int idx;
        getline(cin, str);
        for(int j = 0; j < str.length(); j ++){
            if(str[j] == ' ') idx = j;
        }
        int tmp = stoi(str.substr(idx + 1));
        if(i > 0 && tmp == pre){
            continue;
        } 
        pre = tmp;
        title.push_back(str.substr(0, idx));
        power.push_back(tmp);
    }
    
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < m; i++){
        int lo, hi;
        lo = 0;
        hi = power.size() - 1;
        
        while(lo <= hi){
            mid = (lo + hi) / 2;
            if(arr[i] < power[mid]) hi = mid - 1;
            else if(arr[i] > power[mid]) lo = mid + 1;
            else break;
        }
        if(arr[i] > power[mid]) mid += 1;
        //cout << mid << endl;
        cout << title[mid] << endl;
    }


    return 0;
}