#include <iostream>
#define MOD 1000000000
using namespace std;

long long dp[101][11];

int main()
{
    int n;
    long long ans;

    ans = 0;
    cin >> n;

    for(int i = 1; i <= 9; i++)
    {
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            if(j == 0)
            {
                dp[i][j] = dp[i-1][1];
            }
            else if(j == 9)
            {
                dp[i][j] = dp[i-1][8];
            }
            else
            {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            }

            dp[i][j] = dp[i][j] % MOD;
        }
    }

    int k = 0;
    while(k <= 9)
    {
        ans = ans + dp[n][k];
        ans = ans % MOD;
        k++;
    }

    cout << ans;
}