//배열과 포인터 연습
#include <stdio.h>
int main()
{
    /*
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

   char str1[] = "My String";
   char *str2 = "your String";
   printf("%s %s \n", str1, str2);

   str2 = "Our String";
   printf("%s %s \n", str1, str2);

   str1[0] = 'X';
  // str2[0] = 'X';
   printf("%s %s \n", str1, str2);




    return 0;
}