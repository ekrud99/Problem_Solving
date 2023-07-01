using namespace std;

long long solution(int price, int money, int count)
{
    long long p = price, m = money, c = count;
    long long answer = c * (p + p * c) / 2;
    if(answer - m > 0 ) return answer - m;
    else return 0;
}