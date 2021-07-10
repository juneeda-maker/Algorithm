#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int len;
    long long lent;
    long long ans;

    cin >> n;

    len = 0;
    lent = n;
    ans = 0;
    while(n > 0)
    {
        n = n / 10;
        len++;
    }

    if(len == 1)
    {
        cout << lent;
        return 0;
    }

    ans = 9;

    for(int i = 2; i <= len; i++)
    {
        if(i == len)
        {
            long long res = (lent - pow(10, i-1) + 1) * i;
            ans = ans + res;
            break;
        }
        long long tmp = (9 * pow(10, i -1)) * i;
        ans += tmp;
    }

    cout << ans;
}