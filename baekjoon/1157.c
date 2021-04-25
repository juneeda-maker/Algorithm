#include <stdio.h>

int main()
{
   int index;
   char s[1000000];
   int arr[26] = {0,};
   char c = '?';
   int max;
   int i,j;

   max = 0;

   scanf("%s", s);

   for(i = 0; s[i] != 0; i++)
   {
        if(s[i] >= 'a')
            s[i] -= 32;
        arr[s[i] - 65]++;
   }

   for(i = 0; i < 26; i++)
   {
       if(max < arr[i])
       {
            max = arr[i];
            c = i;
       }
        else if(max == arr[i])
            c = '?';
   }

   if (c != '?')
   {
       printf("%c", c + 65);
   }
   else
   {
       printf("%c", c);
   }

   return (0);
}