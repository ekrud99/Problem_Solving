#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

typedef pair<int, int> pii;

bool cmp(pii p1, pii p2){
    if(p1.second == p2.second) return p1.first < p2.first;
    return p1.second < p2.second;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int N, M, n, t;
    string oper;
    vector<pii> post;

    cin >> N >> M;

    rep(i, 0, N){
        cin >> oper;
        if(oper == "order"){
            cin >> n >> t;
            post.push_back(pii(n, t));
        }
        else if(oper == "sort"){
            sort(post.begin(), post.end(), cmp);
        }
        else{
            cin >> n;
            for(int i = 0; i < post.size(); i++){
                if(post[i].first == n){
                    post.erase(post.begin() + i);
                    break;
                }
            }
        }

        if(post.size() == 0){
            cout << "sleep" << endl;
            continue;
        }
        for(pii p: post) cout << p.first << " ";
        cout << endl;
    }

    return 0;
}