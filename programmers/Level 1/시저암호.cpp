#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
string solution(string s, int n)
{
    string answer = "";
    for(char c: s)
    {
        answer.push_back(c+n);
    }

    return answer;
}
*/


string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                answer += (s[i] - 'a' + n) % 26 + 'a'; 
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                answer += (s[i] - 'A' + n) % 26 + 'A'; 
            }
            
        }
        else
        {
            answer +=  ' ';
        }
        
    }
    return answer;
}

int main(void)
{
    string s;
    int n;
    cin >> s >> n;
    cout << solution(s, n);
}   