#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[9];
    int sum = 0;
    int n = 9;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    sort(arr, arr+n);

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(sum -arr[i] - arr[j] == 100)
            {
                for(int k = 0; k < n; k++)
                {
                    if(k == i || k ==j)
                    {
                        continue;
                    }
                    cout << arr[k] << '\n';
                }
                return 0;
            }
        }
    }
}