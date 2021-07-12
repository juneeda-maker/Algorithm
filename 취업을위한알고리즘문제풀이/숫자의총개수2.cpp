#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    int d = 9;
    int res = 0;
    int c = 1;

    cin >> n;

    while(sum + d < n)
    {
        res = res + (d * c);
        sum = sum + d;
        c++;
        d = d * 10;
    }

    res += (n - sum) * c;
    cout << res;
}