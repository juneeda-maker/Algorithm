#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int cnt = 0;

    cin >> n;

    vector<int> player(n+1);

    for(int i= 1; i <= n; i++)
    {
        cin >> player[i];
    }

    cout << "1 ";

    for(int i = 2; i <= n; i++)
    {
        cnt = 0;
        for(int j = i - 1; j >= 1; j--)
        {
            if(player[i] <= player[j])
                cnt++;
        }
        cout << cnt + 1 << " ";
    }
}