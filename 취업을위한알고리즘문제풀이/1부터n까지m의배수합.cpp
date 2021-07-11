#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int sum;
    int i = 1;

    sum = 0;

    cin >> n >> m;

/*
    while(m * i <= 15)
    {
        sum += m * i;
        i++;
    }
*/

    for(int i = 1; i <= 15; i++)
    {
        if(i % m == 0)
        {
            sum += i;
        }
    }
    cout << sum;
}