#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int cnt;
    priority_queue<int, vector<int>, greater<int>> q;

    cnt = 0;
    cin >> n;

    while(n--)
    {
        int tmp;
        cin >> tmp;
        q.push(tmp);
    }

    while(q.size() != 1)
    {
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        cnt = cnt + a + b;
        q.push(a+b);
    }

    cout << cnt;
}