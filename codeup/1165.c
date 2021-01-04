#include <stdio.h>
int main()
{
    int time, score;
    scanf("%d %d", &time, &score);

    int score2 = 0;

    while(time < 90)
    {
        score2 = score2 + 1;
        time = time + 5;

    }

    printf("%d", score+score2);
    return 0;
}