#include <iostream>

using namespace std;

void d(int x)
{
    if(x == 0)
        return;
    else
    {
        d(x / 2);
        cout << x % 2;
    }
}

int main()
{
    int n;
    cin >> n;

    d(n);

    return 0;
}