#include <iostream>
using namespace std;

int fact(int n)
{
    

    if(n == 1)
    {
        return 1;
    }

    return n * fact(n-1);
    
    
    
}

//팩토리얼 구하기 
int main(void)
{
    int n;
    cin >> n;
    cout << fact(n);


    
}