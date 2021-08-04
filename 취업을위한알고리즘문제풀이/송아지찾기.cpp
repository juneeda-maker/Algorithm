#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int ch[10001], d[3] = {-1, 1, 5};

int main()
{
    int s, e, i, x, pos;
    queue<int> q;

    scanf("%d %d", &s, &e);

    q.push(s);
    ch[s] = 1;

    while(!q.empty())
    {
        x = q.front();
        q.pop();

        for(i = 0; i < 3; i++)
        {
            pos = x + d[i];
            if(pos <= 0 || pos > 10000)
                continue;
            if(pos == e)
            {
                printf("%d", ch[x]);
                exit(0);
            }
            if(ch[pos] == 0)
            {
                ch[pos] = ch[x] + 1;
                q.push(pos);
            }
        }

    }


}