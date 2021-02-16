#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i = 1; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            answer = answer + i;
            if(n/i == i)
            {
                continue;
            }
            else{
            answer = answer + (n/i);
            }
        }
    }


    return answer;
}

int main(void)
{
    int n;
    cin >> n;

    cout << solution(n);
}