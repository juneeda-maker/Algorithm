#include <string>
#include <vector>
#include <iostream>

using namespace std;


string solution(string s, int n)
{
    string answer = "";
    for(char c: s)
    {
        answer.push_back(c+n);
    }

    return answer;
}


string solution(string s, int n) {
    string answer = "";

    for(int i = 0; i < s.size(); i++)
    {
        s[i] = s[i+n];
    }
    answer = s;
    return answer;
}

int main(void)
{
    string s;
    int n;
    cin >> s >> n;
}   