#include <iostream>
#include <string>

using namespace std;

int btn[10];

int main()
{
    int res;
    int cnt;
    string n;
    
    int m;
    int oper = 0;
    cin >> n;
    cin >> m;

    int tmp;
    tmp = stoi(n);


    cnt = n.length();
   

    for(int i = 0; i < m; i++)
    {
        cin >> btn[i];
    }

    int i = 0;


    while(n[i] != '\0')
    {
        for(int k = 0; k < m; k++) 
        {
            if(n[i] == btn[k] + '0')
            {
                if((n[i] - '0') - btn[0] < btn[m-1] - (n[i] - '0'))
                {
                    n[i] = (btn[0] - 1) + '0';
                    oper = 1;
                }
                else
                {
                    n[i] = (btn[m-1] + 1) + '0';
                    oper = -1;
                }
            }
        }
        i++;
    }

    res = stoi(n);

    while(1)
    {
        if(res == tmp)
        {
            break;
        }
        res += oper;
        cnt++;
    }

    cout << cnt;
    
}