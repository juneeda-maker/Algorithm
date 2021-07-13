#include <iostream>

using namespace std;

int main()
{
    int n;
    int student[100];
    int cnt = 0;
    int max;
    
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> student[i];
    }

    max = student[n];

    for(int i = n-1; i >= 1; i--)
    {
        if(max < student[i])
        {
            max = student[i];
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}