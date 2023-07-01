#include <string>
#include <vector>
#include <algorithm>
#define rep(i, a, b) for(auto i = a; i < b; ++i)

using namespace std;
int max_x = 0, max_y = 0;
int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    rep(i, 0, sizes.size()){
        rep(j, 0, 2){
            if(sizes[i][0] > sizes[i][1]){
                swap(sizes[i][0], sizes[i][1]);
            }
            max_x = max(sizes[i][0], max_x);
            max_y = max(sizes[i][1], max_y);
        }
    }    
    answer = max_x * max_y;
    return answer;
}