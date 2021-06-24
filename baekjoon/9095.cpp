#include <iostream>

using namespace std;

int solution(int n)
{
    if(n == 3)
        return 4;
    if(n == 2)
        return 2;   
    if(n == 1)
        return 1;
    return solution(n-1) + solution(n -2) + solution(n - 3); 
}

int main(void)
{
    int t;

    cin >> t;

    int n[t];
    for(int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for(int i = 0; i < t; i++)
    {
        cout << solution(n[i]) << endl;
    }

}