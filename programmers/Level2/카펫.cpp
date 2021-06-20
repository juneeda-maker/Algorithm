#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    int y = 3;
    int sum = brown + yellow;
    int x;

    int ans;

    while(1)
    {
        x = sum / y;
        if((y-2) * (x - 2) == yellow)
        {
            answer.push_back(x);
            answer.push_back(y);
            break;
        }
        y++;
    }
   
    return answer;
}

int main()
{
    int brown = 10;
    int yellow = 2;

    solution(brown, yellow);
}