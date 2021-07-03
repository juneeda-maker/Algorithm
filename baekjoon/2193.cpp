#include <iostream>

using namespace std;

int main()
{
    int n;
    long long dp[91];
    cin >> n;

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for(int i = 4; i <= n; i++)
    {
        dp[i] = dp[i-2] + dp[i-1];
    }

    cout << dp[n];
}