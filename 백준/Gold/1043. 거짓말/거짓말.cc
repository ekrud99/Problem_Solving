#include <iostream>
#include <vector>

#define endl "\n"
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i) 
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define pb push_back
using namespace std;

int n, m, cnt, lie;
bool flg;

vector<int> persons;
vector<int> t_persons;
vector<vector<int>> party;

int find(int node){
    if(node == persons[node]) return node;
    else return persons[node] = find(persons[node]);
}

void merge(int node1, int node2){
    node1 = find(node1);
    node2 = find(node2);
    if(node1 != node2) persons[node2] = node1;
}


int main(){
    FAST;

#ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
#endif

    cin >> n >> m >> cnt;
    t_persons.resize(cnt);
    party.resize(m);
    persons.resize(n + 1);
    REP(i, 0, n) persons[i] = i;
    rep(i, 0, cnt){
        cin >> t_persons[i];
    }

    int prev, cur;

    rep(i, 0, m){
        int loop_cnt;
        cin >> loop_cnt;
        rep(j, 0, loop_cnt){
            if (j >= 1){
                prev = cur;
                cin >> cur;
                merge(prev, cur);
            }
            else{
                cin >> cur;
            }
            party[i].pb(cur);
        }
    }

    rep(i, 0, m){
        flg = true;
        int tp = find(party[i][0]);
        rep(j, 0, cnt){
            if(tp == find(t_persons[j])){
                flg = false;
                break;
            } 
        }
        if(flg) lie += 1;
    }

    cout << lie;
    
#ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
#endif

    return 0;

}
