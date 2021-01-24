#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = 3;

   // scanf("%d", &height);

    draw(height);
    
}

/*
void draw(int h)
{
    //높이가 h인 피라미드 그리기
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/

//재귀 이용한 함수
void draw(int h)
{
    if(h == 0)
    {
        return;
    }

    draw(h-1);

    for(int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}