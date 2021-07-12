#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char c[101];
    char s[101];
    int p = 0;

    gets(c);

    for(int i = 0; c[i] != '\0'; i++)
    {
        if(c[i] != ' ')
        {
            if(c[i] >= 65 && c[i] <= 90)
            {
                s[p++] = c[i] + 32;
            }
            else
            {
                s[p++] = c[i];
            }
        }
    }
    s[p] = '\0';
    cout << s;
    return 0;
}