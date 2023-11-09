#include <iostream>
#include <string>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i, a, b) for(auto i = a; i < b; ++i)
#define endl "\n"

using namespace std;

string subject, grade;
double credit, gpa = 0.0, total_credit = 0.0;

double convertGrade(std::string grade) {
    if (grade == "A+") return 4.5;
    else if (grade == "A0") return 4.0;
    else if (grade == "B+") return 3.5;
    else if (grade == "B0") return 3.0;
    else if (grade == "C+") return 2.5;
    else if (grade == "C0") return 2.0;
    else if (grade == "D+") return 1.5;
    else if (grade == "D0") return 1.0;
    else if (grade == "F") return 0.0;
    else return -1;
}

int main(void){
    FAST;

    // freopen("input.txt", "r", stdin);

    while(cin >> subject >> credit >> grade){
        if(grade == "P") continue;
        gpa += credit * convertGrade(grade);
        total_credit += credit;
    }

    cout << fixed;
    cout.precision(6);
    cout << gpa / total_credit;

    return 0;
}
