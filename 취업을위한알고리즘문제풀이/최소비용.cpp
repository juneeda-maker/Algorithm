#include <stdio.h>

int n, m, max = 0, sum = 0;
int map[21][21];
int ch[21][21];

void DFS(int v)
{
    int i;
    if(v == n)
    {
        if(sum > max)
        {
            max = sum;
            sum = 0;
        }
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            if(map[v][i] != 0 && ch[v][i] == 0)
            {
                ch[v][i] = 1;
                sum += map[v][i];
                DFS(i);
                ch[v][i] = 0;
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

    ch[1][1] = 1;
    DFS(1);

    printf("%d", max);

    return 0;
}