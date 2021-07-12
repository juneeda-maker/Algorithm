#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t start, end;
    int n;
    int tmp;
    int arr[50001] = {0,};
    double result;
    cin >> n;


    start = time(NULL);
    for(int i = 1; i<= n; i++)
    {
        for(int j = i; j <= n; j = j + i)
        {
            arr[j]++;
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    end = time(NULL);
    result = (double)(end-start);
    cout << "result: " << result;
}