//배열과 포인터 연습
#include <stdio.h>
int main()
{   
    int arr[3] = {15, 25, 35};
    //int *ptr = &arr[0]; // int * ptr = arr과 동일
    int *ptr;
    ptr = &arr[0];
    
    printf("%p %p \n", ptr, arr);
    printf("%d %d \n", ptr[0], arr[0]); // 15 15
    printf("%d %d \n", *ptr, *arr);     // 15 15
    printf("%d %d \n", ptr[1], arr[1]); // 25 25
    printf("%d %d \n", ptr[2], arr[2]); // 35 35
  

    /*
    int arr[3] = {0, 1, 2};
    printf("배열의 이름 : %p \n", arr);
    printf("첫 번째 요소: %p \n", &arr[0]); // 첫 번째 요소: 0x7ffeec8337bc
    printf("두 번째 요소: %p \n", &arr[1]); // 두 번째 요소: 0x7ffeec8337c0
    printf("세 번째 요소: %p \n", &arr[2]);
    */

    /*
    int arr[100];
    int *ptr = arr;

    //ptr = (int*)malloc(sizeof(int) * 100);

    
    int i = 10;

    printf("arr[%d] = %d\n", i, arr[i]);
    printf("ptr[%d] = %d\n", i, ptr[i]); 

    printf("*(arr + %d) = %d\n", i, *(arr + i));
    printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    

   printf("arr = %p\n", arr);
   printf("&arr = %p\n", &arr);

   printf("ptr = %p\n", ptr);
   printf("&ptr = %p\n", &ptr);
    
    
    int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

    int *numPtr = numArr; //포인터에 int형 배열을 할당

    printf("%d\n", *numPtr);//배열의 주소가 들어있는 포인터를 역참조하면 배열의 첫 번째 요소에 접근

    printf("%d\n", *numArr); //배열 자체를 역참조 해도 배열의 첫 번째 요소에 접근

    printf("%d\n", numPtr[5]); //배열의 주소가 들어있는 포인터는 인덱스로 접근할 수 있음
    */

   
   // 배열

    /*
    int arr[3] = { 5, 10, 15 };
    printf("arr = %d\n", arr);
    for (int i = 0; i < 3; i++) {
        printf("arr[i] : %d\n", arr[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("&arr[i] : %d\n", &arr[i]);
    }
    
    printf("*arr = %d\n", *arr);
    printf("*arr = %d\n", *arr+1);
    printf("*arr = %d\n", *(arr+1));
    */

   /*
   int arr[3] = { 5, 10, 15 };
   int*ptr = arr;
   printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
   printf("%d ", *ptr); ptr++;
   printf("%d ", *ptr); ptr++;
   printf("%d ", *ptr); ptr--;
   printf("%d ", *ptr); ptr--;
   printf("%d ", *ptr); printf("\n");

   *(ptr+1) = 20;
   printf(" *(arr + 1) = %d\n", *(arr + 1));
   printf(" *(ptr + 1) = %d\n", *(ptr + 1));
    //arr[i] == *(arr+i)
    */

   /*
   char str1[] = "My String";
   char *str2 = "your String";
   printf("%s %s \n", str1, str2);

   str2 = "Our String";
   printf("%s %s \n", str1, str2);

   str1[0] = 'X';
  // str2[0] = 'X';
   printf("%s %s \n", str1, str2);
    */



    return 0;
}