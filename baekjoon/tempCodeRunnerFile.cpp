#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    
    cin >> n;

    int dp[10000];
    int arr[10000];
    int res;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    res = 0;
    dp[0] = arr[0];
    dp[1] = dp[0] + arr[1];
    dp[2] = max(dp[0] + arr[2], arr[1] + arr[2]);
    if(n < 2)
    {
        cout << arr[0];
        return 0;
    }
    for(int i = 3; i < n; i++)
    {
        dp[i] = max(dp[i-2] + arr[i] ,max(dp[i-3] + arr[i-1] + arr[i], dp[i-1]));
        
    }

    cout << dp[n-1];
}