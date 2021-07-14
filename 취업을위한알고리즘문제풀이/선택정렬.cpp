#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int idx;
    int tmp;
    cin >> n;

    int a [100];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n-1; i++)
    {
        idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[idx])
            {
                idx = j;
            }
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}