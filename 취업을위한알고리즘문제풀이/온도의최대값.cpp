#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    int max;
    int sum = 0;

    vector<int> degree(n);
    
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++)
    {
       scanf("%d", &degree[i]);
    }

    for(int i = 0; i < k; i++)
    {
        sum += degree[i];
    }

    max = sum;

    for(int i = k; i < n; i++)
    {
        sum += degree[i] - degree[i-k];

        if(sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}