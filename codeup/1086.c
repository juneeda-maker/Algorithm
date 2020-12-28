#include <stdio.h>
int main(){
    int w,h,b;
    float result;
    scanf("%d %d %d", &w, &h, &b);
    result = w*h*b;
    printf("%0.2f MB", result/(8*1024*1024));

    return 0;
}