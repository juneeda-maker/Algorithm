#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int pos;
    int j;
    
    vector<int> is(n+1);
    vector<int> os(n+1);

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &is[i]);
    }

    for(int i = n; i >= 1; i--)
    {
        pos = i;
        
        for(j = 1; j <= is[i]; j++)
        {
            os[pos] = os[pos+1];
            pos++;
        }
        os[pos] = i;
    }

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", os[i]);
    }

    return 0;
}