#include <stdio.h>
int main()
{
    

   int one,two,three;
   float o,t,th;

   scanf("%f %d", &o, &one);
    scanf("%f %d", &t, &two);
    scanf("%f %d", &th, &three);

    float result = (o * (float)one) + (t * (float)two) + (th * (float)three);  

   printf("%0.1f", result);

    return 0;
}