#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

struct Student{
    int nation;
    int num;
    int score;
};

bool comp(Student s1, Student s2){
    return s1.score > s2.score;
}

int n, nation, num, score, check[101], cnt = 0, idx = -1;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<Student> ranking(n);
    
    rep(i, 0, n){
        cin >> nation >> num >> score;
        ranking[i] = Student{nation, num, score};
    }

    sort(ranking.begin(), ranking.end(), comp);

    while(1){
        ++idx;
        ++check[ranking[idx].nation];
        if(check[ranking[idx].nation] >= 3) continue;
        cout << ranking[idx].nation << " " << ranking[idx].num << endl;
        ++cnt;
        if(cnt == 3) break;
    }

    return 0;
}