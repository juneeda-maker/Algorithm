#include <stdio.h>

int main()
{
    int i,j,k;
    int c;
    double n;
    double score[1001];
    double avg;
    double count;

    
    scanf("%d", &c);

    for (i = 0; i < c; i++)
    {
        count = 0;
        avg = 0;
        scanf("%lf", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &score[j]);
            avg = avg + score[j];
        }
        avg = avg / n;
        for (k = 0; k < n; k++)
        {
            if (score[k] > avg)
                count++;
        }
        printf("%0.3f%%\n", count / n * 100);
        
    }
}