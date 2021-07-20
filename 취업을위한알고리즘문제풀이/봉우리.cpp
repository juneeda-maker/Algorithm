#include <iostream>
#include <vector>
#include <stdio.h>


using namespace std;

int a[60][60];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    int n, i , j, cnt = 0, flag, k;

    freopen("input.txt", "rt", stdin);

    cin >> n;

    for(i = 1; i <=n; i++)
    {
        for(j = 1; j<= n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j<= n; j++)
        {
            flag = 0;
            for(k = 0; k < 4; k++)
            {
                if(a[i][j] <= a[i + dx[k]][j + dy[k]])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) cnt++;
        }
    }
    
    cout << cnt;
}