#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";

    if(s.length() % 2 == 0) //짝수일때
    {
        for(int i = (s.length() / 2)-1; i <= (s.length()/2); i++)
        {
            answer = answer + s[i];
            
        }
    }
    else //홀수일때
    {
        answer = s[(s.length() / 2)];
    }
    
    return answer;
}

int main(void)
{   
    string s;
    cin >> s;

    cout << solution(s);
}