#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    int count = 0;

    long long n = num;
    

    while(n != 1)
    {
        if(n != 1 && count >= 500 )
        {
            return -1;
        }
        else if(n%2 == 0)
        {
            n = n/2;
            count++;
        }
        else
        {
            n = n *3 +1;
            count++;
        }
    }

    return count;
}

int main(void)
{   
    long long n;
    cin >> n;
    cout << solution(n);
}