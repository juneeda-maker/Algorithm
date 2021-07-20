#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int a[10][10];
    int avg;
    freopen("input.txt", "rt", stdin);    
    int i, j, k, sum, min, idx, tmp;

    for(i = 1; i <= 9; i++)
    {
        sum = 0;
        min = 2147000000;
        for(j = 1; j <= 9; j++)
        {
            cin >> a[i][j];
            sum =  sum + a[i][j];
        }

        avg = (sum / 9.0) + 0.5;
        cout << avg << " ";

        for(k = 1; k <= 9; k++)
        {
            tmp = abs(a[i][k] - avg);
            if(tmp < min)
            {
                min = tmp;
                idx = a[i][k];
            }
            else if(tmp == min)
            {
                if(idx < a[i][k])
                    idx = a[i][k];
            }
        }
        
        cout << idx <<'\n';
    }

    return 0;
}