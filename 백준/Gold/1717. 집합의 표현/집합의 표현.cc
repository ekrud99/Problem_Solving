#include <iostream>
#include <vector>


#define endl "\n" // 줄바꿈
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) //입출력 빠르게
//cin, cout -> 사용 시 입출력은 이 두개로만
#define rep(i, a, b) for(auto i = a; i < b; ++i) // b 미포함 반복문
#define REP(i, a, b) for(auto i = a; i <= b; ++i) // b 포함 반복문
//auto 타입 추론
#define pii pair<int, int> // pair<int, int> b = make_pair(1, 2); 와 같이 쓰임, c.first = 1, c.secoond = 2도 가능
//=> pii b 가능
#define all(v) (v).begin(), (v).end()
//vector 사용 시 - vector<int> vec, vec.resize(10) 사이즈 정함, vec.begin() 첫 번째, vec.end() 마지막 원소
//sort(vec.begin(), vec.end()) -> sort(all(vec))
//vec.push_back(1) -> 위에 원소 붙임

#define pb push_back
#define INF numeric_limits<int>::max() //int형 범위의 가장 최대값 가져옴 #include<limits>
#define PIV 1 << 20

using namespace std; // std 클래스에 있는것을 사용하겠다
typedef long long ll;
typedef unsigned long long ull;
int n, m;
vector<int> parent;

int find(int node){
    if(node == parent[node]){
        return node;
    }else{
        return parent[node] = find(parent[node]);
    }
}

void unionn(int node1, int node2){
    node1 = find(node1);
    node2 = find(node2);

    if(node1 != node2){
        parent[node2] = node1;
    }
}

int main(){
    FAST;
    #ifndef ONLINE_JUDGE 
    clock_t start = clock();
    freopen("input.txt", "r", stdin);
    #endif
    cin >> n >> m;
    parent.resize(n + 1);

    REP(i, 0, n){
        parent[i] = i;
    }

    rep(i, 0, m){
        int bit, node1, node2;
        cin >> bit >> node1 >> node2;
        if(bit == 0) unionn(node1, node2);
        else{
            if(find(node1) == find(node2)){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }
    }

    #ifndef ONLINE_JUDGE
    cout << endl << "elapsed time: " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "ms" << endl;
    #endif

    return 0;
}