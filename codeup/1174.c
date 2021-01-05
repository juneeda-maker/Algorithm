#include <stdio.h>



int main()
{
    int h,m;
    int time;
    scanf("%d %d", &h, &m);

    time = (h*60) + m;
    time = time - 30;
    time = time + (24 * 60);
    time = time % (24 * 60);

    h = time / 60;
    m = time%60;

    printf("%d %d",h, m);
    return 0;
}