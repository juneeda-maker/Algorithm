#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[100];

    int tmp;
    int idx;
    int cnt;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++)
    {
        idx = i;
        for(int j = i + 1; j <= n; j++)
        {
            if(a[j] > a[idx])
                idx = j;
        }
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    cnt = 0;
    for(int i = 2; i <= n; i++)
    {
        if(a[i] != a[i-1])
            cnt++;
        if(cnt == 2)
            cout << a[i];
    }
}