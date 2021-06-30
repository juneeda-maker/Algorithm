#include <iostream>

using namespace std;

int main()
{
    long long dp[51][51];
    int n;
    cin >> n;

    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;

    if(n == 1)
    {
        cout << 1 << " " << endl;
        return 0;
    }
    
    if(n >= 2)
    {
        cout << dp[0][0] << " " << endl;
        cout << dp[1][0] << " " << dp[1][1] << endl;
    }
    
    for(int i = 2; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0)
            {
                dp[i][j] = dp[i-1][j];
                cout << dp[i][j] << " ";
            }
            if(i == j)
            {
                dp[i][j] = dp[i-1][j-1];
                cout << dp[i][j] << " ";
            }
            if(j !=0 && i != j)
            {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                cout << dp[i][j] << " ";
            }
        }
        cout << endl;
    }
}