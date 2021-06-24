#include <iostream>
#include <algorithm>
using namespace std;
int h[1000][3];
int main()
{
    int cost[3];
    int n;
    cin >> n;

    h[0][0] = 0;
    h[0][1] = 0;
    h[0][2] = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        h[i][0] = min(h[i-1][1], h[i-1][2]) + cost[0];
        h[i][1] = min(h[i-1][0], h[i-1][2]) + cost[1];
        h[i][2] = min(h[i-1][0], h[i-1][1]) + cost[2];
    }

    cout << min(h[n][0],min(h[n][1], h[n][2]));
    
}