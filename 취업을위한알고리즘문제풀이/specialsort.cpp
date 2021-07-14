#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[101];
    int tmp;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - i -1; j++)
        {
            if(a[j] > 0 && a[j+1] < 0)
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}