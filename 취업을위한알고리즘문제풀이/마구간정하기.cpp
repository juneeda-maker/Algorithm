#include <iostream>
#include <algorithm>


using namespace std;

int c,i,n;

int count(int s, int x[])
{
    int cnt = 1;
    int pos = x[1];
    for(i = 2; i <= n; i++)
    {
        if(x[i] - pos >= s)
        {
            cnt++;
            pos = x[i];
        }
    }

    return cnt;
}

int main()
{
    int mid,res,lt, rt;
    int *a = new int[n+1];
    
    cin >> n >> c;


    for(i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a+1, a+n+1);

    lt = 1;
    rt = a[n];
    
    while(lt <= rt)
    {
        mid = (lt+rt) / 2;

        if(count(mid, a) >= c)
        {
            res = mid;
            lt = mid + 1;
        }
        else
        {
            rt = mid - 1;
        }
    }
    delete[] a;
    cout << res;
}