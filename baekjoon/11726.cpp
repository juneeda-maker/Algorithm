#include <iostream>
#include <vector>

using namespace std;

int dp[1001];

int solution(int n)
{
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i = 3; i <= n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007; 
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    cout << solution(n);
}