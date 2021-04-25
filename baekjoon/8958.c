#include <stdio.h>
#include <string.h>

int main()
{
    int i, j ,sum, score;
    int test;

    char arr[81];
    scanf("%d", &test);

    for (i = 0; i < test; i++)
    {
        sum = 0, score = 1;
        scanf("%s", arr);

        for (j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == 'O')
            {
                sum = sum + score;
                score++;
            }
            if (arr[j] == 'X')
            {
                score = 1;
            }
        }
        printf("%d\n", sum); 
    }
}