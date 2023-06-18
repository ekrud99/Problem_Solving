#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n"

using namespace std;

int p, m, l, cnt;
string n;
typedef pair<string, int> playerInfo;
queue<playerInfo> q;
typedef vector<playerInfo> pq;
vector<pq> rooms;

int main(void){
    FAST;

    cin >> p >> m;

    rep(i, 0, p){
        cin >> l >> n;
        q.push(playerInfo(n, l));
    }

    rep(i, 0, p){
        bool is_entered = false;
        playerInfo tmp = q.front();
        string name = tmp.first;
        int level = tmp.second;

        if(rooms.size() == 0){ // 첫 번째 플레이어 입장
            pq room;
            room.push_back(tmp);
            rooms.push_back(room);
            q.pop();
            is_entered = true;
            continue;
        }
        rep(j, 0, rooms.size()){ // 두 번째 플레이어부터 rooms vector를 탐색
            playerInfo host = rooms[j].front();
            int host_level = host.second;
            int level_diff = level - host_level;
            if((level_diff <= 10 && level_diff >= -10) && rooms[j].size() < m) {
                rooms[j].push_back(tmp);
                q.pop();
                is_entered = true;
                break;
            }
        }
        if(!is_entered){ // 어느 방에도 입장하지 못했다면 새로운 방 개설
            pq room;
            room.push_back(tmp);
            rooms.push_back(room);
            q.pop();
        }

    }

    rep(i, 0, rooms.size()){
        if(rooms[i].size() == m) cout << "Started!" << endl;
        else cout << "Waiting!" << endl;
        sort(rooms[i].begin(), rooms[i].end());
        rep(j, 0, rooms[i].size()){
            playerInfo tmp = rooms[i][j];
            int level = tmp.second;
            string name = tmp.first;
            cout << level << " " << name << endl;
        }
    }
    


    return 0;
}