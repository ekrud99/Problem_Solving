#include <iostream>
#include <vector>
#include <queue>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;
int n, k, l, t;


int dir[10001], arr[101][101], map[101][101]; //1 right, 2 left - dir[1] == 0 -> 1초 후 오른쪽 전환
typedef pair<int, int> pos;
queue<pos> q;

void print_map(){
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cout << map[i][j] << "";
        }
        cout << endl;
    }
    cout << endl;
}

bool is_possible(int y, int x){
    return (y >= 1 && x >= 1 && y <= n && x <= n);
}

int main(void){
    FAST;
    cin >> n >> k;
    
    for(int i = 0; i < k; i++){
        int y, x;
        cin >> y >> x;
        arr[y][x] = 1;
    }

    cin >> l;
    for(int i = 0; i < l; i++){
        int x;
        char c;
        cin >> x >> c;
        if(c == 'D') dir[x] = 1;
        else dir[x] = 2;
    }

    int cur_y, cur_x, next_dir;
    cur_y = 1;
    cur_x = 1;
    next_dir = 0; // 0 동, 1남, 2 서, 3 북
    map[cur_y][cur_x] = 1;

    q.push({cur_y, cur_x});

    while(1){
        //cout << "cur_dir: " << cur_dir << " t: " << t << endl;
        t++;
        switch(next_dir){
            case 0: 
                cur_x += 1;
                break;
            case 1:
                cur_y += 1;
                break;
            case 2:
                cur_x -= 1;
                break;
            case 3:
                cur_y -= 1;
                break;
            default:
                break;
        }
        //cout << "y: " << cur_y << " x: " << cur_x << endl;
        if(!is_possible(cur_y, cur_x)) break;
        if(map[cur_y][cur_x]) break;

        map[cur_y][cur_x] = 1;
        q.push(make_pair(cur_y, cur_x));

        if(!arr[cur_y][cur_x]){
            pos loc = q.front();
            // cout << "visited " << loc.first << " " << loc.second << endl;
            map[loc.first][loc.second] = 0;
            q.pop();
        }
        else{
            arr[cur_y][cur_x] = 0;
        }

        if(dir[t] == 1){
            ++next_dir;
            if(next_dir > 3) next_dir = 0;
        }
        else if(dir[t] == 2){
            --next_dir;
            if(next_dir < 0) next_dir = 3;
        }

        // print_map(); 
        // cout << "\n";
    }

    cout << t;
    return 0;
}