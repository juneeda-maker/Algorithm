#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int tmp;

    cin >> n;

    int a[101];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n -i -1; j++)
        {
            if(a[j] > a[j+1])
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