#include <stdio.h>
int main()
{
    int h,m;
    int h2,m2;
    scanf("%d %d", &h, &m);



    if(m - 30 < 0)
    {
    

        if(h == 0 && m - 30 < 0)
        {
            h2 = 23;
            m2 = m + 30;
        }
        else
        {
            m2 = m + 30;
            h2 = h -1;
        }
        
    }

    else
    {
        m2 = m - 30;
        h2 = h;
    }

    printf("%d %d", h2, m2);

    return 0;
}