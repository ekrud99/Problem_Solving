#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"
#define INF numeric_limits<int>::max()
#define MIN numeric_limits<int>::min()

using namespace std;

struct Student_Info{
    string name;
    int date, month, year;
};

string name;
int n, date, month, year;
Student_Info youngest, oldest;

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    cin >> n;

    cin >> name >> date >> month >> year;
    youngest = {name, date, month, year};
    oldest = {name, date, month, year};

    rep(i, 1, n){
        cin >> name >> date >> month >> year;
        if(youngest.year < year){
            youngest = {name, date, month, year};
        }
        else if(youngest.year == year && youngest.month < month){
            youngest = {name, (date), (month), (year)};
        }
        else if(youngest.year == year && youngest.month == month && youngest.date < date){
            youngest = {name, date, month, year};
        }

        if(oldest.year > year){
            oldest = {name, date, month, year};
        }
        else if(oldest.year == year && oldest.month > month){
            oldest = {name, date, month, year};
        }
        else if(oldest.year == year && oldest.month == month && oldest.date > date){
            oldest = {name, date, month, year};
        }
    }

    cout << youngest.name << endl << oldest.name;

    return 0;
}