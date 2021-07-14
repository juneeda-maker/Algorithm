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

    for(int i = 1; i < n; i++)
    {
        tmp = a[i];
        for(int j = i -1; j >= 0; j--)
        {
            if(tmp < a[j])
            {
                a[j+1] = a[j];
            }
            else
                break;
        }
        a[j+1] = tmp;
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}