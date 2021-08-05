#include <iostream>

using namespace std;

int dy[100], cnt = 0;

int DFS(int n)
{
    if(n == 1 || n == 2) return n;
    if(dy[n] > 0) return dy[n];
    else
        return dy[n] = DFS(n-1) + DFS(n-2);
}

int main()
{
    int n;
    cin >> n;

    cout << DFS(n);
    return 0;
}