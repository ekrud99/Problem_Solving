#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define REP(i, a, b) for(auto i = a; i <= b; ++i)
#define INF numeric_limits<int>::max()
#define MIN numeric_limits<int>::min()
#define pb push_back


using namespace std;
vector<int> vec;
int main(void){
    FAST;
    
    int t;
    cin >> t;

    rep(i, 0, t){
        priority_queue<int> max_heap; // max heap
        priority_queue<int, vector<int>, greater<int>> min_heap; // min heap
        vec.clear();
        int len, num;
        cin >> len;
        cin >> num;
        max_heap.push(num);
        vec.push_back(num);
        //if(num % 2 != 0) cout << num << " ";
        rep(i, 1, len){
            if(i % 2 != 0){
                cin >> num;
                min_heap.push(num);
                if(min_heap.top() < max_heap.top()){ // max heap의 top은 항상 min heap의 top보다 작아야함
                    int max_top = max_heap.top();
                    int min_top = min_heap.top();
                    max_heap.pop();
                    min_heap.pop();
                    max_heap.push(min_top);
                    min_heap.push(max_top);
                    
                }
                
            }else{
                cin >> num;
                max_heap.push(num);
                if(min_heap.top() < max_heap.top()){ 
                    int max_top = max_heap.top();
                    int min_top = min_heap.top();
                    max_heap.pop();
                    min_heap.pop();
                    max_heap.push(min_top);
                    min_heap.push(max_top);
                }
                vec.push_back(max_heap.top());
            }

        }
        cout << vec.size() << endl;
        for(int i = 0; i < vec.size(); ++i){
            if(i == 10){
                cout << endl;
                cout << vec[i] << " ";
                continue;
            }
            cout << vec[i] << " ";
        }
        cout << endl;

    }

    return 0;
}

