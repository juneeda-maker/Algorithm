#include <stdio.h>

int n, m, min = 2147000000;
int map[21][21];
int ch[21];

void DFS(int v, int sum)
{
    int i;
    if(v == n)
    {
        if(sum < min)
        {
            min = sum;
        }
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(map[v][i] > 0 && ch[i] == 0)
            {
                ch[i] = 1;
                DFS(i, sum + map[v][i]);
                ch[i] = 0;
            }
        }
    }
}

int main()
{
    freopen("input.txt", "rt", stdin);
    int i, j,a,b,c;
    scanf("%d %d", &n , &m);

    for(i = 1; i <= m; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        map[a][b] = c;
    }

    ch[1] = 1;
    DFS(1, 0);

    printf("%d", min);

    return 0;
}