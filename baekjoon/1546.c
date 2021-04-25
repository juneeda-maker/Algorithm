#include <stdio.h>

int main()
{
    int num;
    double score[1001];
    double max;
    double result;
    
    max = 0;
    result = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%lf", &score[i]);
        if (score[i] > max)
        {
            max = score[i];
        }
    }

    for(int j = 0; j < num; j++)
    {
        result = result + ((score[j] / max) * 100);
    }

    result = result / num;

    printf("%f", result);
}