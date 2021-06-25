#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int p[10001];
    int dp[1001];

    for(int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    
    dp[0] = 0;
    dp[1] = p[1];
   

    for(int i = 1; i <= n; i++)
    {   
        for(int j = 1; j <= i; j++)
        {
            dp[i] = max(dp[i] , p[j] + dp[i - j]);  //반복문을 돌면서 j 루프 속에서의 최댓값을 찾아주기위한 max 
        }
    }

    cout << dp[n];
}