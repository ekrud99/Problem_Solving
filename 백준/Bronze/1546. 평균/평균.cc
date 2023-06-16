#include <iostream>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int n;
double sum, m;

int main(void){
    FAST;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        int score;
        cin >> score;
        if(m < score) m = score;
        sum += score;
    }

    double avg = sum / m * 100 / n;
    cout << avg;

    return 0;
}