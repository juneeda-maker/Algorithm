#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int cnt = 0;
    int flag;
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        flag = 1;
        for(int j = 2; j*j <= i; j++)
        {
            if(i % j == 0)
            {    
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cnt++;   
    }

    cout << cnt;

}