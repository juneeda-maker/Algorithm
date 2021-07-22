#include <iostream>

using namespace std;

int n, m, a[11];
int cnt = 0;

void DFS(int L, int sum)
{
    if(L == n+1)
    {
        if(sum == m)
        {
            cnt++;
        }
    }
    else
    {
        DFS(L+1, sum + a[L]);
        DFS(L+1, sum - a[L]);
        DFS(L+1, sum);
    }
}

int main()
{
    int i;

    cin >> n >> m;

    for(i = 1; i <= n; i++)
        cin >> a[i];

    DFS(1, 0);

    if(cnt == 0)
        cout << -1;
    else
        cout << cnt;
    

    return 0;
}