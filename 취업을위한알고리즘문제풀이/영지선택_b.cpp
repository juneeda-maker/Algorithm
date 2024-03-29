#include <iostream>
#include <stdio.h>

using namespace std;

int a[701][701], dy[701][701];

int main()
{
    freopen("input.txt", "rt", stdin);

    int h, w, n, m, i, j, tmp, max = -21;

    cin >> h >> w;

    for(i = 1; i <= h; i++)
    {
        for(j = 1; j <= w; j++)
        {
            cin >> a[i][j];
            dy[i][j] = dy[i-1][j] + dy[i][j-1] -dy[i-1][j-1] + a[i][j];
        }
    }

    cin >> n >> m;

    for(i = n; i <= h; i++)
    {
       for(j = m; j <= w; j++){
           tmp = dy[i][j] - dy[i-n][j] - dy[i][j-m] + dy[i-n][j-m];
           if(tmp > max) 
            max = tmp;
       }
    }

    cout << max;

    return 0;
}