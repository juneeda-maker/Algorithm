#include <iostream>
#include <math.h>

using namespace std;

int reverse(int x);
bool isPrime(int x);

int main()
{
    int n;
    int tmp = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        int res = reverse(tmp);
    
        if(isPrime(res) == true)
        {
            cout << res;
        }
    }
}

int reverse(int x)
{
    int num = 0;
    while(x)
    {
        num = num * 10;
        num += x % 10;
        x = x / 10;
    }
    return num;
}

bool isPrime(int x)
{
    bool flag = true;
    if(x == 1)
        return false;
    for(int i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}