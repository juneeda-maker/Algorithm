#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    stack<int> s;
    
    cin >> n >> k;

    char str[20] = "0123456789ABCDEF";

    while(n)
    {
        s.push(n % k);
        n = n / k;
    }

    while(!s.empty())
    {
        cout << str[s.top()];
        s.pop();
    }

    return 0;
}