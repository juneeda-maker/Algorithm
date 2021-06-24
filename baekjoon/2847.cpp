#include <iostream>
using namespace std;

int main()
{
    int n;
    int j;
    int count;
    count = 0;

    cin >> n;
    int level[n];

    for(int i = 0; i < n; i++)
    {
        cin >> level[i];
    }

    for(int i = n -1; i >= 0; i--)
    {
        j = i - 1;
        while(1)
        {
            if(level[i] > level[j])
                break;
            level[j]--;
            count++;
        }
    }

    cout << count;
}