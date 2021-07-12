#include <iostream>

using namespace std;

int digit_sum(int x);

int main()
{
    int n;
    int x;
    int max;
    int num;
    int res;
    max = 0;

    freopen("input.txt", "rt", stdin); 
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        x = num;
        
        int y = digit_sum(x);

        if(y > max)
        {
            max = y;
            res = x;
        }
        else if(y == max)
        {
            if(res < x)
                res = x;
        }
    }
    cout << res << '\n';
}

int digit_sum(int x)
{
    int tmp;
    tmp = 0;
    while(x)
    {
        tmp = tmp + (x % 10);
        x = x / 10;
    }
    return tmp;
}