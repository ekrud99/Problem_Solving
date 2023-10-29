#include <iostream>
#include <algorithm>
#include <vector>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int n;

bool compare(pair<int, string> user1, pair<int, string> user2){
    return user1.first < user2.first;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;
    vector<pair<int, string>> users(n);
    rep(i, 0, n){
        int age;
        string name;
        cin >> age >> name;
        users[i] = make_pair(age, name);
    }

    stable_sort(users.begin(), users.end(), compare);

    for(auto user : users) cout << user.first << " " << user.second << endl;

    return 0;
}