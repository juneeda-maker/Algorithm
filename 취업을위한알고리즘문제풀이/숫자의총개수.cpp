#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt;
    int tmp;

    cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        tmp = i;

        while(tmp)
        {
            tmp = tmp / 10;
            cnt++;
        }
    }

    cout << cnt;

}

