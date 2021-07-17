#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int n,m,i;
    int p1,p2,p3;

    cin >> n;

    vector<int> a(n);

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cin >> m;

    vector<int> b(m);
    vector<int> c(m+n);

    for(i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    p1 = 0, p2 = 0, p3 = 0;

    while(p1 < n && p2 < m)
    {
        if(a[p1] == b[p2])
        {
            c[p3++] = a[p1++];
            p2++;
        }
        else if(a[p1] < b[p2])
            p1++;
        else 
            p2++;
    }


    for(i = 0; i < p3; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}