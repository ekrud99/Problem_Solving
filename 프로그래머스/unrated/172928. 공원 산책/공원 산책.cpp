#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool is_possible(int y, int x, int w){
    return (y < w && y >= 0 && x < w && x >= 0);
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int start_x = 0, start_y = 0;
    int s = park.size();
    int arr[s][s];
    
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            if(park[i][j] == 'S'){
                start_y = i;
                start_x = j;
                arr[i][j] = 1;
            }else if(park[i][j] == 'O') arr[i][j] = 1;
            else arr[i][j] = 0;
        }
    }

    int cur_y = start_y;
    int cur_x = start_x;
    
    for(int i = 0; i < routes.size(); i++){
        string str = routes[i];
        char dir = str[0];
        int step = str[2] - '0';
        bool flag = true;
        for(int j = 1; j <= step; j++){
            if(dir == 'E'){
                if(is_possible(cur_y, cur_x + j, s) && arr[cur_y][cur_x + j]){
                }else{
                    flag = false;
                    break;  
                } 
            }else if(dir == 'S'){
                if(is_possible(cur_y + j, cur_x, s) && arr[cur_y + j][cur_x]){
                }else{
                    flag = false;
                    break;  
                }
            }else if(dir == 'W'){
                if(is_possible(cur_y, cur_x - j, s) && arr[cur_y][cur_x - j]){
                }else{
                    flag = false;
                    break;  
                }
            }else{
                if(is_possible(cur_y - j, cur_x, s) && arr[cur_y - j][cur_x]){
                }else{
                    flag = false;
                    break;  
                }
            }
        }
        if(flag){
                if(dir == 'E') cur_x += step;
                else if(dir == 'S') cur_y += step;
                else if(dir == 'W') cur_x -= step;
                else cur_y -= step;
            }
    }

    answer.push_back(cur_y);
    answer.push_back(cur_x);
    
    return answer;
}