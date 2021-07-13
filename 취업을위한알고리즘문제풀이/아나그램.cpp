#include <iostream>
#include <algorithm>

using namespace std;

int a[100];
int b[100];

int main()
{
    char s[101];

    int digit;

    cin >> s;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            digit = s[i] - 64;
        }
        else
        {
            digit = s[i] -70;
        }
        a[digit]++;
    }
    cin >> s;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            digit = s[i] - 64;
        }
        else
        {
            digit = s[i] -70;
        }
        b[digit]++;
    }

    for(int i = 1; i <= 52; i++)
    {
        if(a[i] != b[i])
        {
            cout << "NO";
            exit(0);
        }
    }

    cout << "YES";

    return 0;
}