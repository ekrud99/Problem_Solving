#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define endl "\n"

using namespace std;

int t, n, team_num;
vector<int> ans;

int sol() {
    typedef pair<int, int> player; // 들어온 순서, 점수
    typedef pair<int, int> teamInfo; // 점수 합, 팀명
    typedef vector<player> team;
    vector<team> teams;
    vector<player> drops;

    struct CompareTeamInfo {
        bool operator()(const teamInfo& a, const teamInfo& b) {
            return a.first > b.first;  // 오름차순 정렬
        }
    };

    priority_queue<teamInfo, vector<teamInfo>, CompareTeamInfo> pq;

    cin >> n;
    teams.resize(201);
    rep(j, 0, n) {
        cin >> team_num;
        teams[team_num].push_back(player(j + 1, j + 1));
    }

    rep(i, 1, 201) {
        int size = teams[i].size();
        if (!size) continue;
        if (size < 6) {
            rep(j, 0, size) {
                drops.push_back(teams[i][j]);
            }
        }
    }

    rep(i, 1, 201) {
        int size = teams[i].size();
        if (size == 6) {
            rep(j, 0, size) {
                rep(k, 0, drops.size()) {
                    if (teams[i][j].first > drops[k].first) teams[i][j].second -= 1;
                }
            }
        }
    }

    rep(i, 1, 201) {
        int sum = 0;
        int size = teams[i].size();
        if (size == 6) {
            rep(j, 0, 4) {
                sum += teams[i][j].second;
            }
            pq.push(teamInfo(sum, i));
        }
    }

    int ma, mt, p5; // 최대값, 우승팀
    ma = pq.top().first;
    p5 = teams[pq.top().second][4].second; //4번주자
    mt = pq.top().second;
    pq.pop(); // pq의 첫 번째 요소를 제거

    while (!pq.empty()) {
        teamInfo tmp = pq.top();
        if (ma == tmp.first) {
            if (p5 > teams[tmp.second][4].second) {
                p5 = teams[tmp.second][4].second;
                mt = tmp.second;
            }
        }
        pq.pop();
    }

    return mt;
}

int main(void) {
    FAST;

    cin >> t;

    rep(i, 0, t) {
        int res = sol();
        ans.push_back(res);
    }

    rep(i, 0, ans.size()) {
        cout << ans[i] << endl;
    }

    return 0;
}
