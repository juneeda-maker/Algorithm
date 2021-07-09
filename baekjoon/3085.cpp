#include <iostream>
#include <algorithm>

using namespace std;

char arr[51][51];
int res;
int n;

void check();

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++) //행을 바꾸는 경우
    {
        for(int j = 0; j < n-1; j++)
        {
            swap(arr[i][j], arr[i][j+1]);
            check();
            swap(arr[i][j], arr[i][j+1]);
        }
    }

    for(int j = 0; j < n; j++) //열을 바꾸는 경우
    {
        for(int i = 0; i < n -1; i++)
        {
            swap(arr[i][j], arr[i+1][j]);
            check();
            swap(arr[i][j], arr[i+1][j]);
        }
    }
    cout << res;
}

void check()
{
    char c;
    int cnt;

    for(int i = 0; i < n; i++) //행 계산
    {
        cnt = 1;
        c = arr[i][0];
        for(int j = 1; j < n; j++)
        {
            if(arr[i][j] == c)
            {
                cnt++;
            }
            else{
                cnt = 1;
            }
            c = arr[i][j];
            if(cnt > res)
            {
                res = cnt;
            }
        }
    }
 
    for(int i = 0; i < n; i++)
    {
        cnt = 1;
        c = arr[0][i];
        for(int j = 1; j < n; j++)
        {
            if(arr[j][i] == c)
            {
                cnt++;
            }
            else{
                cnt = 1;
            }
            c = arr[j][i];
            if(res < cnt)
            {
                res = cnt;
            }
        }
    }
}