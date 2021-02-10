#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
        {
            count1++;
        }
        if(s[i] == 'y' || s[i] == 'Y')
        {
            count2++;
        }

    }

    if(count1 == count2)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    

    return answer;
}

 