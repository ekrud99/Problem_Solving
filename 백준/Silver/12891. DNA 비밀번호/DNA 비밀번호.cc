#include <iostream>
#include <string>
#include <unordered_map>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

int s, p, res;
string dna, pw;
int arr[4]; // A, C, G, T
unordered_map<char, int> mp; // key: dna, value: count

bool check(){ // 주어진 조건을 만족시키는지 check
    
    rep(i, 0, 4){
        if(mp['A'] < arr[0]) return false;
        else if(mp['C'] < arr[1]) return false;
        else if(mp['G'] < arr[2]) return false;
        else if(mp['T'] < arr[3]) return false;
    }

    return true;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> s >> p >> dna;

    rep(i, 0, 4){
        cin >> arr[i];
    }

    rep(i, 0, p){ // 첫 번재 index check
        ++mp[dna[i]];
    }

    if(check()) ++res;

    rep(i, p, s){ // 다음 index 부터 차례대로 check, 앞의 dna와 붙일 dna가 다를 경우 처리해줌
        char f = dna[i - p], r = dna[i];
        if(f != r){
            --mp[f];
            ++mp[r];
        }
        if(check()) ++res;
    }

    cout << res;

    return 0;
}

