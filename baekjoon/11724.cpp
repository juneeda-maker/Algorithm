#include <iostream>
#include <vector>
#include <queue>


using namespace std;

vector<long long> gr[1000000];
long long visit[1000000];

void bfs(int start)
{
    queue<long long> q;
    q.push(start);
    visit[start] = true;

    while(!q.empty())
    {
        long long x = q.front();
        q.pop();
        for(int i = 0; i < gr[x].size(); i++)
        {
            long long y = gr[x][i];
            if(!visit[y])
            {
                q.push(y);
                visit[y] = true;
            }
        }
    }
}

int main()
{
    int n,m;
    int cnt = 0;

    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        int a,b;
        cin >> a >> b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }
    for(int i = 1; i <= n; i++)
    {
        if(!visit[i])
        {
            bfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;
}