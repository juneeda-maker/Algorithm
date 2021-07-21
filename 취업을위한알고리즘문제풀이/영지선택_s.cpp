#include <iostream>
#include <stdio.h>

using namespace std;

int a[51][51];

int main()
{
    freopen("input.txt", "rt", stdin);
    int h, w, i, j, n, m, k, s, sum = 0; 
    int max = 0;
    
    cin >> h >> w;

    for(i = 1; i <= h; i++)
    {
        for(j = 1; j <= w; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> n >> m;


    for(i = 1; i <= h - n + 1; i++)
    {
        for(j = 1; j < w - m +1; j++) 
        {
            sum = 0;
            for(k = i; k < i + n; k++) //행
            {
                for(s = j; s < j + m; s++)
                    sum += a[k][s];
            }
            if(sum > max)
                max = sum;
        }
    }

    cout << max;
}