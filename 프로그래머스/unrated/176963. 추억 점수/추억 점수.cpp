#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> mp;
    
    for(int i = 0; i < name.size(); i++){
        string str = name[i];
        int score = yearning[i];
        mp[str] = score;
    }
    
    for(int i = 0; i < photo.size(); i++){
        int sum = 0;
        for(int j = 0; j < photo[i].size(); j++){
            sum += mp[photo[i][j]];
        }
        answer.push_back(sum);
    }
    
    return answer;
}