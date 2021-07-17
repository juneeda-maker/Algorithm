#include <iostream>

using namespace std;

int main()
{
    int a, b, tmp, i, cnt;

    cnt = 0;

    cin >> a;

    tmp = a;

    b = 1;
    a--;

    while(a > 0)
    {
        b++;
        a = a - b;
        if(a % b == 0)
        {
            for(i = 1; i < b; i++)
            {
                cout << (a/b) + i << " + ";
            }
            cnt++;
            cout << (a/b) + i << " = " << tmp << '\n';
        }
    }

    cout << cnt;

    return 0;
}