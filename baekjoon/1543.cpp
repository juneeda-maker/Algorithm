#include <iostream>
#include <string>

using namespace std;

string s;
string a;

int main()
{
    int cnt;
    
    cnt = 0;
 
    getline(cin, s);
    getline(cin, a);
    
    for(int i = 0; i < s.length(); i++)
    {
        bool check = true;
        for(int j = 0; j < a.length(); j++)
        {
            if(s[i+j] != a[j])
            {
                check = false;
                break;
            }
        }
        if(check) {
            cnt++;
            i += a.length()-1;
        }
    }
    
    cout << cnt;
}