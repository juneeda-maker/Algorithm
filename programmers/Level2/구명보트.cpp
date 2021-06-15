#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {

    int answer = 0;
    int idx = 0;
    sort(people.begin(), people.end());

    while(idx < people.size())
    {
        int back = people.back();
        people.pop_back();


        if(back + people[idx] <= limit)
        {
            answer++;
            idx++;
        }
        else
        {
            answer++;
        }
    }
    return answer;
}

int main()
{
    vector<int> people = {160,150,140,60,50,40};
    int limit;
    limit = 200;

    cout << solution(people, limit);
}