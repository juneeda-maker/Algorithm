#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int max = 0;
    int cnt = 0;
    int num;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if(num > m)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if(cnt > max)
            max = cnt;
    }

    if(max == 0)
    {
        cout << -1;
    }
    else
    {
        cout << max;
    }
    return 0;
}