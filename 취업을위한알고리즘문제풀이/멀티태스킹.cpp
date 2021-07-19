#include <iostream>

using namespace std;

int main()
{
    int pos = 0, n, i, k, tot = 0,cnt = 0;
    int a[2001];

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }

    cin >> k;


    if(k >= tot)
    {
        cout << -1; 
        return 0;
    }

    while(1)
    {
        pos++;
        if(pos > n) pos = 1;
        if(a[pos] == 0) continue;
        a[pos]--;
        cnt++;
        if(cnt == k)
            break;
    }
    while(1)
    {
        pos++;
        if(pos > n) pos = 1;
        if(a[pos] != 0)
            break;
    }

    cout << pos;
    return 0;
}