#include <iostream>

using namespace std; 

int main()
{
    int E = 0, S = 0, M = 0;
    int year;
   
    year = 1;

    cin >> E >> S >> M;

    while(1)
    {
        if((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)
            break;
        year++;
    }
    cout << year;
}