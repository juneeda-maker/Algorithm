#include <iostream>
using namespace std;




int main(void)
{
   int i = 0;
   int j = 9;

    /*
   while(i < 10)
   {
       cout << i << endl;
       i++;

       if(i == 10)
       {
           cout << "Hello World";
       }
    }
    */
   while(i <= j)//엇갈릴 때까지 반복
    {
        while(i < 10){ 
            i++;
        }
        printf("%d\n", i);
        while(j > 1)
        {
            j--;
        }
        printf("%d\n", j);
        if(i > j) 
        {
            printf("change"); 
        }
        else
        {
            printf("------");
        }
    }

}
