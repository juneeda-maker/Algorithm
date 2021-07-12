#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[31];
    
    int j;
    j = 0;
    int cnt = 0;

    cin >> c;

    while(c[j] != '\0')
    {
        if(c[j] == '(')
            cnt++;
        else if(c[j] == ')')
            cnt--;
        if(cnt < 0)
        {
            cout << "NO";
            break;
        }

        j++;
        
    }
    if(cnt == 0)
        cout << "YES";

    else
        cout << "NO";

    return 0;
}