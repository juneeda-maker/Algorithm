#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt = 0;
    int tmp;
    int digit;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        tmp = i;
        while(tmp)
        {
            digit = tmp % 10;
            if(digit== 3)
                cnt++;
            tmp = tmp / 10; 
        }
    }

    cout << cnt;
}