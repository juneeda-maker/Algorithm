#include <stdio.h>
 
int main() {
    int t;
    int btn[] = { 300,60,10 };
    int count[3] = { 0, };
 
    scanf("%d", &t);
    
    if(t % 10 == 0)
    {
        for(int i = 0; i < 3; i++)
        {
            if(t >= btn[i])
            {
                t = t - btn[i];
                count[i]++;
                i--;
            }
            if(t == 0)
                break;
        }
        printf("%d %d %d\n", count[0], count[1], count[2]);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
