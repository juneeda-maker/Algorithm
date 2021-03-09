#include <iostream>
using namespace std;

void oddnum(int a, int b){
    
    if(a > b)
    {
        return;
    }
    
    if(a%2 != 0)
    {
        cout << a << " ";
        a++;
    }
  
    

    oddnum(a+1,b);
}

int main(void)
{
    int a,b;
    cin >> a >> b;
    oddnum(a,b);
}