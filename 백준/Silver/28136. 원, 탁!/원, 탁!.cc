#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int n, cnt = 0;
    cin >> n;
    vector<int> vec(n + 1);
    
    for(int i = 0; i < n; ++i) cin >> vec[i];
    vec[n] = vec.front();
    for(int i = 0; i < n; ++i) if(vec[i] >= vec[i + 1]) ++cnt;
    cout << cnt;
    
    return 0;
}
