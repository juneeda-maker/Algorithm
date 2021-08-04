#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n, k, x, i;

    scanf("%d %d", &n , &k);

    queue<int> q;

    for(i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while(!q.empty())
    {
        for(i = 1; i < k; i++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
        if(q.size() == 1)
        {
            printf("%d", q.front());
            q.pop();
        }
    }

    return 0;
}