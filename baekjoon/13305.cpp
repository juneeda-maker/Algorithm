#include <iostream>

using namespace std;

int main()
{
    int n;
    long long res;
    int len[100001] = {0, };
    int city[100001];
    long long max = 1000000000;
    res = 0;
    cin >> n;

    for(int i = 0; i < n -1; i++)
    {
        cin >> len[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> city[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(max > city[i])
            max = city[i];
        res += max * len[i];
    }

    cout << res;
}