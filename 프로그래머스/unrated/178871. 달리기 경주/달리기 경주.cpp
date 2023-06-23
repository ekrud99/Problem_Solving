#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string, int> mp;    
    
    for(int i = 0; i < players.size(); i++){
        mp[players[i]] = i;
    }
    
    for(int i = 0; i < callings.size(); i++){
        string overtaker = callings[i];
        string overtaken = players[mp[overtaker] - 1];
        string tmp_str = players[mp[overtaker]];
        players[mp[overtaker]] = players[mp[overtaker] - 1];
        players[mp[overtaker] - 1] = tmp_str;
        int tmp = mp[overtaker];
        mp[overtaker] = mp[overtaken];
        mp[overtaken] = tmp;
    }
    
    return players;
}