#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int cnt1 = 0, cnt2 = 0;
    int tmp;
    int j;
    int res;

    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        tmp = i;
        j = 2;
        while(1)
        {
            if(tmp % j == 0)
            {
                if(j == 2) cnt1++;
                if(j == 5) cnt2++;
                tmp = tmp / j;
            }
            else
            {
                j++;
            }
            if(tmp == 1)
                break;
        }
    }

    if(cnt1 < cnt2) res = cnt1;
    else res = cnt2;

    cout << res;
}