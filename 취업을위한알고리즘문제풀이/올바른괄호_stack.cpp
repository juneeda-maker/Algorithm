#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    char a[32];
    int i, flag = 1;
    stack<char> s;

    cin >> a;

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '(')
            s.push(a[i]);
        else
            if(s.empty())
            {
                cout << "NO" << '\n';
                flag = 0;
                break;
            }
            else
                s.pop();
    }

    if(s.empty() && flag == 1)
        cout << "YES" << '\n';
    else if(!s.empty() && flag == 1)
        cout << "NO" << '\n';
    return 0;
}