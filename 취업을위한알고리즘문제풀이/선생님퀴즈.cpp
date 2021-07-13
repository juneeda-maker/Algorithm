#include <iostream>

using namespace std;

int main()
{
    int n;
    int num;
    int ans;
    int sum;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num >> ans;
        sum = 0;

        for(int j = 1; j <= num; j++)
        {
            sum = sum + j;
        }
        if(sum == ans)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}