#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    priority_queue<int> pq;
    queue<pair<int, int>> q;

    int n = priorities.size();

    for(int i = 0; i < n; i++)
    {
        pq.push(priorities[i]);
        q.push(make_pair(priorities[i], i));
    }

    while(!q.empty())
    {
        int first = q.front().first;
        int second = q.front().second;
        q.pop();

        if(pq.top() == first)
        {
            answer++;
            pq.pop();

            if(second == location)
            {
                break;
            }
        }
        else
        {
            q.push(make_pair(first, second));
        }

    }
    return answer;
}


int main()
{
    vector<int> priorities = {2,1,3,2};
    int location = 2;

    cout << solution(priorities, location);
}