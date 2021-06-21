#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> tmp;

    string k = "";
     for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            tmp.push_back(stoi(k));
            k = "";
        }
        else
        {
            k += s[i];
        }
    }

    tmp.push_back(stoi(k));

    sort(tmp.begin(), tmp.end());

    string a = to_string(tmp[0]);
    string b = to_string(tmp.back());

    answer += a;
    answer += " ";
    answer += b;
    
    return answer;
}


int main()
{
    string s = "1 2 3 4";
    solution(s);
}