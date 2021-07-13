#include <iostream>

using namespace std;

int main()
{
    int player[10001];
    int rank[10001];
    int n;
    int cnt = 0;

    cin >> n;

    for(int i= 1; i <= n; i++)
    {
        cin >> player[i];

        rank[i] = 1;
    }

    for(int i = 2; i <= n; i++)
    {
        cnt = 0;
        for(int j = 1; j <= i; j++)
        {
            if(player[i] < player[j])
                cnt++;
        }
        rank[i] += cnt;
    }

    for(int i = 1; i <= n; i++)
    {
        cout << rank[i] << " ";
    }
}