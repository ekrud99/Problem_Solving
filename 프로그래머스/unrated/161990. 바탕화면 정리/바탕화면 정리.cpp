#include <iostream>
#include <string>
#include <vector>
#include <limits>

#define INF numeric_limits<int>::max()
#define rep(i, a, b) for(auto i = 0; i < b; ++i)

using namespace std;

int left_y = INF, left_x = INF, right_y = 0, right_x = 0;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    
    rep(i, 0, wallpaper.size()){
        rep(j, 0, wallpaper[0].size()){
            if(wallpaper[i][j] == '#'){
                if(left_y > i) left_y = i;
                if(left_x > j) left_x = j;
                if(right_y < i) right_y = i;
                if(right_x < j) right_x = j;
            }
        }
    }
    
    
    
    return {left_y, left_x, right_y + 1, right_x + 1};
}