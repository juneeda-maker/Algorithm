#include <iostream>
using namespace std;
 
int solution(int n)
{
    int answer = 0;
 
    while(n != 0)
    {
        answer = answer + n%10;
        n = n/10;
    }
 
    return answer;
}

int main(void)
{
    int n;
    cin >> n;
    cout << solution(n);
}