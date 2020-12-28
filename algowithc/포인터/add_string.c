#include<stdio.h>
#include<stdlib.h>

char *AddString(char *, char *);
int main()
{
    char data_1[80] = "I am SuperMAN";
    char data_2[80] = "who are you?";
    char *ret;

    printf("AddString() 함수를 호출 하기 전\n");
    printf("data_1의 문자열 : %s\n", data_1);
    printf("data_2의 문자열 : %s\n", data_2);

    ret=AddString(data_1, data_2);

    printf("AddString() 함수를 호출한 후\n");
    printf("data_1의 문자열 : %s\n", data_1);
    printf("data_2의 문자열 : %s\n", data_2);
    printf("ret의 문자열 : %s\n", ret);

    free(ret);
    

    return 0;
}

char *AddString(char *src1, char *src2)
{
    char *ret, *ptr;
    ptr =(char*)malloc(sizeof(src1)+sizeof(src2) + 3);
    ret = ptr;
    while(*src1)
        *ptr++ = *src1++;
    while(*src2)
        *ptr++ = *src2++;

        *ptr = '\0';

        return ret;
}