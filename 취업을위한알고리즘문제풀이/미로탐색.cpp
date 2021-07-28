#include <stdio.h>

int map[10][10], ch[10], cnt = 0;

void DFS(int v)
{
    int i;
    if(v == 7)
    {
        cnt++;
    }
    else
    {
        for(i = 1; i <= 7; i++)
        {
            if(map[v][i] == 1 && ch)
            {
                DFS(i);
            }
        }
    }
}

int main(){

    int i, j, a;

    for(i = 1; i<= 7; i++)
    {
        for(j = 1; j <= 7; j++)
        {
            scanf("%d", a);
            map[i][j] = a;
        }
    }

    return 0;
}