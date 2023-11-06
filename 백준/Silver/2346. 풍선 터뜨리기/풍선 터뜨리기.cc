#include <iostream>
#include <deque>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n, pivot = 0, step, balloon;
deque<pair<int, int>> balloons;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    rep(i, 0, n){
        cin >> balloon;
        balloons.push_back(make_pair(balloon, i + 1));
    }

    step = balloons.front().first;
    balloons.pop_front();

    cout << 1 << " ";

    while(1){
        
        if(balloons.empty()) break;

        if(step > 0){
            rep(i, 0, step - 1){
                balloons.push_back(balloons.front());
                balloons.pop_front();
            }
            cout << balloons.front().second << " ";
            step = balloons.front().first;
            balloons.pop_front();
        }
        else{
            step *= -1;
            rep(i, 0, step - 1){
                balloons.push_front(balloons.back());
                balloons.pop_back();
            }
            cout << balloons.back().second << " ";
            step = balloons.back().first;
            balloons.pop_back();
        }
    }

    return 0;
}