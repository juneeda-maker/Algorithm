#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if(a < b){
        for(int i = a; i <= b; i++)
        {
            answer = answer + i;
        }
    }
    else
    {
        for(int i = b; i <= a; i++)
        {
            answer = answer + i;
        }
    }
    

    return answer;
}

int main(void)
{
    int a,b;
    cin >> a >> b;

    cout << solution(a,b);
}