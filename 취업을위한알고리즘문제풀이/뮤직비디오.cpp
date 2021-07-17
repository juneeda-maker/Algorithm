#include <iostream>
#include <algorithm>

using namespace std;

int a[1001], n;

int Count(int s)
{
    int i , cnt = 1, sum = 0;
    for(i = 1; i<=n; i++)
    {
        if(sum+a[i] > s){
            cnt++;
            sum = a[i];
        }
        else
        {
            sum = sum + a[i];
        }
    }
    return  cnt;
}

int main()
{
    int m, i, lt = 1, rt = 0 , mid, res, max = 0;
    cin >> n >> m;

    for(i = 1; i <= n; i++)
    {
        cin >> a[i];
        rt = rt + a[i];
        if(a[i] > max) max=a[i];
    }

    while(lt <= rt)
    {
        mid = (lt+rt)/2;
        if(mid>=max && Count(mid) <= m)
        {
            res = mid;
            rt=mid-1;
        }
        else lt=mid+1;
    }
    cout << res; 

    return 0;
}