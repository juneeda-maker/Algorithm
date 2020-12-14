#include<stdio.h>
int main()
{
    printf("C언어에서 제공하는 자료형의 크기를 알아보자\n");

    //sizeof() : 데이터의 실제 크기를 알아내는 기능
    printf("char 형의 크기 : %d\n", sizeof(char));
    printf("int 형의 크기 : %d\n", sizeof(int));
    printf("short 형의 크기 : %d\n", sizeof(short));
    printf("long 형의 크기 : %d\n", sizeof(long));
    printf("float 형의 크기 : %d\n", sizeof(float));
    printf("double 형의 크기 : %d\n", sizeof(double));
    printf("long double 형의 크기 : %d\n", sizeof(long double));

    //테스트
    return 0;
}