#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int arr[100000];
    int dp[1000000];
    int res;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    res = arr[0];
    dp[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        res = max(res, dp[i]);
    }

    cout << res;

}