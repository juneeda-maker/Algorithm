#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int sum;
    int i = 1;

    sum = 0;

    cin >> n >> m;

    while(m * i <= 15)
    {
        sum += m * i;
        i++;
    }

    cout << sum;
}