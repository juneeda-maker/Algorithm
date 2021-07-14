#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int s, n;
    int tmp,pos;
    int k;
   
    cin >> s >> n;

    vector<int> c(s);
    int a;

    
    for(int i = 0; i < n; i++)
    {
        cin >> a;

        pos = -1;
        for(int j = 0; j < s; j++)
        {
            if(a == c[j])
                pos = j;
        }

        if(pos == -1) //miss
        {
            for(k = s-1; k >= 1; k--)
            {
                c[k] = c[k-1];
            }
        }

        else{ //hit 
            for(k = pos; k >= 1; k--)
            {
                c[k] = c[k-1];
            }
        }
        c[k] = a;
    }

   for(int i = 0; i < s; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}