#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int a;
    priority_queue<int> pq;

    while(true)
    {
        scanf("%d", &a);
        if(a == -1)
            break;
        if(a == 0)
        {
            if(pq.empty()) printf("-1\n");
            else
            {
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else
        {
            pq.push(a);
        }
    }

    return 0;
}