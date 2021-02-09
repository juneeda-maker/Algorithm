#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//첫 번째 방법
bool comp(char a, char b)
{
    return a > b;
}

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end(), comp);
    answer = s;
    return answer;
}


//두 번째 방법
string solution2(string s) {
    string answer = "";
    sort(s.begin(), s.end(), greater<char>());
    answer = s;
    return answer;
}


int main(void)
{
    string s;
    cin >> s;
    cout << solution(s);

}




