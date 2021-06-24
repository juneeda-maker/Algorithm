#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int count;
    int start;
    int end;

    count = 1;
    cin >> n;

    vector<pair<int,int>> time;

    for(int i = 0; i < n; i++)
    {
        cin >> start >> end;
        time.push_back(make_pair(end, start));
    }

    sort(time.begin(), time.end());

    int front = time[0].first;
    for(int i = 1; i < n; i++)
    {
        if(front <= time[i].second)
        {
            count++;
            front = time[i].first;
        }
    }

    cout << count;
}