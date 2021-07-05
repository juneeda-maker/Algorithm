#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    int arr[100000];
    int min;
    int ans;
    ans = 0;
    min = 0;
    cin >> n;
    if(n == 1)
    {
        ans = 0;
        cout << ans;
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j + 1] < arr[i] + arr[j])
            {
                min += arr[i] + arr[j + 1];
                i = j + 2;
                break;
            }
            else
            {
                min += arr[i] + arr[j];
                i = j + 1;
                break;
            }
        }
        ans = min + (min + arr[i]);
    }

    cout << ans;
}