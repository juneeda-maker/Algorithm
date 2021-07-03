#include <iostream>
#define mod 10007

using namespace std;

int main()
{
    int n;
    long long sum;
    long long dp[1001][10] = {0,};

    sum = 0;
    cin >> n;

    for(int i = 0; i <= 9; i++)
    {
        dp[1][i] = 1;
    }
    

    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            for(int k = j; k <= 9; k++)
            {
                dp[i][j] += dp[i-1][k] % mod;
            }
        }
    }

    for(int i = 0; i <= 9; i++)
    {
        sum += dp[n][i];
    }
    cout << sum % mod;
}