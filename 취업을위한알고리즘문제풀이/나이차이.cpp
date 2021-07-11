#include <iostream>

using namespace std;

int main()
{
    int n;
    int age[100];
    int max = 0;
    int tmp;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> age[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(age[i] < age[j])
            {
                tmp = age[i];
                age[i] = age[j];
                age[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(age[i] - age[j] > max)
            {
                max = age[i] - age[j];
            }
        }
    }

    cout << max << '\n';

}