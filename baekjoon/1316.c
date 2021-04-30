#include <stdio.h>

int get_dis(char s[]);

int get_dis(char s[])
{
    int dist;
    int i, j;

    i = 0;
    while (s[i])
    {
        j = 0;
        ++j;
        while(s[j])
        {
            if(s[i] == s[j])
            {
                dist = j - i;

                if(dist > 1)
                {
                    if(s[j] != s[j-1])
                        return 0;
                }
            }
            j++;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    int n,i;
    int count;
    char s[101];

    scanf("%d", &n);

    i = 0;
    count = 0;

    while(i < n)
    {
        scanf("%s", s);
        count += get_dis(s);
        i++;
    }
    printf("%d", count);
}