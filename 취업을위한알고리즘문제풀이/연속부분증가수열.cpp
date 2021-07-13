#include <iostream>

using namespace std;

int arr[100001];

int main()
{
    int n;
    int cnt = 1;
    int max = 0;
    int pre, now;

    cin >> n;

    cin >> pre;

    for(int i = 2; i <= n; i++)
    {   
        cin >> now;
        if(pre <= now)
        {
            cnt++;
            
            if(cnt > max)
            max = cnt;
        }
        else
        {
            cnt = 1;
        }
        pre = now;
    }

    cout << max;

    return 0;
}