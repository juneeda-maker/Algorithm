#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;

    int day;
    int count = 0;

    for(int i = 0; i < progresses.size(); i++)
    {
        day = (100 - progresses[i]) / speeds[i];
        if((100 - progresses[i]) % speeds[i] > 0)
        {
            day++;
        }
        q.push(day);
    }

    int tmp = q.front();
    
    while(!q.empty())
    {
        if(q.front() > tmp)
        {
            answer.push_back(count);
            tmp = q.front();
            count = 0;
        }
        else
        {
            count++;
            q.pop();
        }
    }
    if(count != 0)
    {
            answer.push_back(count);
    }

    return answer;
}

int main()
{
    vector<int> progresses = {93, 30, 55};
    vector<int> speeds = {1,30,5};

    solution(progresses, speeds);

}