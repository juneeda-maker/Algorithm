#include <iostream>
using namespace std;

int sum = 0;
void p(int n)
{
    
    if(n < 1)
    {
        cout << sum;
        return;
    }
    
    sum = sum + n;
    p(n-1);

}

int main(void)
{
    int n;
    cin >> n;
    p(n);

}