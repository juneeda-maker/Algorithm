#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.length() != 4 && s.length() != 6)
    {
        answer = false;
        return answer;
    }
    else
    {
       for(int i = 0; i < s.length(); i++)
       {
           if((int)s[i] < 48 || (int)s[i] > 57)
           {
               answer = false;
               break;
           }
       }
       
    }
    
    return answer;
}


int main(void)
{
    
}