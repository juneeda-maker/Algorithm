#include <iostream>
#include <stdio.h>

using namespace std;

void D(int v)
{
    if(v > 7) return;
    else{
        D(v *2);
        printf("%d ", v);
        D(v*2+1);
    }
}

int main()
{
    D(1);

    return 0;
}