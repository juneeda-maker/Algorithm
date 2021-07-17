#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m,i;
    int p1,p2,p3;

    int a[101];
    int b[101];
    int c[300];

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;

    for(i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    p1 = 0;
    p2 = 0;
    p3 = 0;

    while(p1 < n && p2 < m)
    {
        if(a[p1] < b[p2])
        {
            c[p3++] = a[p1++];
        }
        else
        {
            c[p3++] = b[p2++];
        }
    }

    while(p1 < n) 
        c[p3++] = a[p1++];

    while(p2 < m) 
        c[p3++] = b[p2++];


    for(i = 0; i < p3; i++)
        cout << c[i] << " ";  

}