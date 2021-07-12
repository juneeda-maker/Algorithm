#include <iostream>

using namespace std;

int main()
{
    char c[101];
    int arr[10] = {0,};
    int max = 0;
    int res = 0;
    int digit;

    cin >> c;

    for(int i = 0; c[i] != '\0'; i++)
    {
        digit = c[i] - '0';
        arr[digit]++;
        if(arr[digit] > max)
        {
            max = arr[digit];
            res = digit;
        }
        else if(arr[digit] == max)
        {
            if(res < digit)
            {
                res = digit;
            }
        }
    }

    cout << res;
}