#include <stdio.h>

int add (int num1, int num2)
{
    return num2 - num1;
}

int swap(int* num1, int* num2) {

    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    return 0;
}


int main()
{   
    /*
    int a = 5;
    int b = 10;

    printf("a=%d\nb=%d\n", a, b);

    swap(&a, &b);

    printf("a=%d\nb=%d\n", a, b);

    int *ptr1;
    int *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    printf("address of a is %x ", &a);
    printf("\nvalue of ptr is %d ", *ptr1);
    printf("\nb - a = %d ", add(*ptr1,*ptr2));
    */

   char arr[6]= {"hello"};

   char *ptr;
   ptr = &arr[0];

   printf("%c", *(ptr+1)); 


    //다중 포인터 연습
    /*
    int a = 1;
    int *p1 = &a;
    printf("p1의 값은? : %d\n", *p1);

    int **p2 = &p1;
    printf("p2의 값은? : %d\n", **p2);

    *(*p2) = 123;

    printf("%d\n", *(*p2));
    printf("%d\n", *p1);
    printf("%d\n", a);
    printf("%d\n", *p2);
   */ 

  /*
   char str[5] = {'a', 'b', 'c'};
   char *p = str;

   int i = 0;
   for(i = 0; i < 5; i++)
    printf("%c", p[i]);
    */

   /*
   char str[10] = "abc123";
   char *p = str;

   int i = 0;
   for(i = 0; i <10; i++)
   {
       printf("%c", *(p+i)); // p + i 는 p[i]의 주소이다.
   }
   */

  /*
  int a[5] = {1, 2, 3, 4, 5};
  int *p = a;

  int i = 0;
  for(i = 0; i < 5; i++)
  {
      printf("%d\n", *(p+i)); //자료형의 크기만큼 증가 시킨 값 
      printf("**%d\n", *p + i); //주소의 값 + 1
  }
  */
 
    //포인터의 관계 연산
    //단순한 주소값의 비교 , 주소는 뒤로 갈수록 커짐
    /*
    int a[5] = {1, 0};
    int *p1 = &a[1]; 
    int *p2 = &a[0]; 

    if(p1 < p2)
        printf("p1이 p2보다 작다.");
    else if(p1 > p2)
        printf("p1이 p2 보다 크다.");
        */

       //포인터 상수, 상수 포인터

        /*
        int a = 3;
        int *const p = &a;

        *p = 123; //가능
        p = NULL; //불가능
        */

        /*
        int a[5] = {1,2,3,4,5};
        *a = 123; // a[0] = 123;
        a = NULL; //주소를 바꿀 수 없다
        */

       //포인터 배열
       /*()
       int a = 1, b = 2, c = 3;
       int *p[3] = {&a, &b, &c};

       *p[0] = 123;
       *p[1] = 456;
       *p[2] = 789;

       printf("%d %d %d\n", a, b, c);
       printf("%d %d %d\n", *p[0], *p[1], *p[2]);
        */

  
    return 0;
}