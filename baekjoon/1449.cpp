#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,l;
    int pipe[1001];
    int cnt = 1;
    cin >> n;
    cin >> l;

    for(int i = 0; i < n; i++)
    {
        cin >> pipe[i];
    }

    sort(pipe, pipe+n);

    int rp = pipe[0];
    
    for(int i = 1; i < n; i++)
    {
        if(pipe[i] - rp + 1 > l)
        {
            cnt++;
            rp = pipe[i];
        }
    }

    cout << cnt;
}