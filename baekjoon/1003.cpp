#include <iostream>
#include <vector>

using namespace std;

int ans[100000] = {0,1, };

int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return ans[n];
    }
    else if(ans[n] == 0){
        ans[n] = fibo(n-1) + fibo(n-2);
    }
    return ans[n];
}

int main()
{
    int t,n;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        
        if(n == 0)
            cout << "1 0" << '\n';
        else
        {
            cout << fibo(n-1) << ' ' << fibo(n) << endl;
        }
    }

}