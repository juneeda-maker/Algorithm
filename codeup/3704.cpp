#include <iostream>

using namespace std;

int main()
{
    int n;
    int dp[100001];
    
    cin >> n;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= n; i++)
    {
        dp[i] = dp[i-1] % 1000 + dp[i-2] % 1000+ dp[i-3] % 1000;
    }

    cout << dp[n] % 1000;
}