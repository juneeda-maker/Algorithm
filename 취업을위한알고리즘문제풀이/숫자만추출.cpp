#include <iostream>

using namespace std;

int main()
{
    char c[51];
    int num;
    int cnt;

    cnt = 0;
    num = 0;

    cin >> c;

    for(int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 48 && c[i] <= 57)
            num = num * 10 + c[i] - '0';
    }
    cout << num << '\n';
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
            cnt++;
    }
    cout << cnt << '\n';
}