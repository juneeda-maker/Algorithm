#include <stdio.h>
int NumberOfString(char*);

int main()
{
    char data[80];
    int ret;

    printf("문자열을 입력하세요: ");
    scanf("%s", data);
    ret = NumberOfString(data);
    printf("data의 문자열 : %s\n", data);
    printf("data의 문자 개수 : %d\n", ret);
}

int NumberOfString(char*src)
{
    int num = 0;
    while(*src++)
        num++;

        return num;
}