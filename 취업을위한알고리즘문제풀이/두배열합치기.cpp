#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m,i;

    cin >> n;

    vector<int> a(n);


    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;

    vector<int> a(n+m);

    for(int j = i; j < m; j++)
    {
        cin >> a[i];
    }

    for(i = 0; i < m+n; i++)
    {
        cin >> a[i];
    }


}