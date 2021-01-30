#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int p; //타로가 지불할 돈
    cin >> p;

    int c; //거스름돈

    int count = 0; //잔돈 코인 갯수
    
    int n[6] = {500, 100, 50, 10, 5, 1};
    c = 1000 -p;

    for(int i = 0; i <sizeof(n)/sizeof(int); i++)
    {
        count = count + (c/n[i]);
        c = c%n[i];
    }

    cout << count;
}