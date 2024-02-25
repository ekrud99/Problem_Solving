#include <iostream>
#include <cmath>

using namespace std;

long long find_r(string color, bool is_add){
    string colors[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    
    if(is_add){
        for(int i = 0; i < 10; ++i){
            if(color == colors[i]) return i;
        }
    }
    else {
        for(int i = 0; i < 10; ++i){
            if(color == colors[i]) return pow(10, i);
        }
    }
    return 0;
}

int main() {
    
    string color;
    long res = 0;
    
    for(int i = 0; i < 3; ++i){
        cin >> color;
        if(i < 2){
            res += find_r(color, true);
            if(i == 0) res *= 10;
        }
        else{
            res *= find_r(color, false);
        }
    }
    
    cout << res;

    return 0;
}