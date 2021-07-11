#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int sum;
    int i;

    sum = 0;

    cin >> a >> b;

    for(i = a; i < b; i++)
    {
        cout << i << " + ";
        sum += i;
    }
    cout << i;
    cout << " = ";
    cout << sum+i << '\n';
}