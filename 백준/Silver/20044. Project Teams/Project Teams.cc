#include <iostream>
#include <vector>
#include <algorithm>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    vector<int> students(n * 2), team(n);

    rep(i, 0, n * 2) cin >> students[i];
    sort(students.begin(), students.end());
    rep(i, 0, n) team[i] = students[i] + students[n * 2 - 1 - i];
    sort(team.begin(), team.end());

    cout << team.front();

    return 0;
}