#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int a;
    int rest;
    int count = 0;

    cin >> n;

    a = n/5; //5kg 짜리 봉지의 갯수

    while(a >= 0)
    {   
        rest = 0;
        count = 0;
        if(a > 0)
        {
            rest = n - (5 * a);
            count = a;
        }
        else{
            rest = n;
        }

        count = count + (rest/3);
        rest = rest%3;

        if(rest == 0)
        {
            cout << count;
            break;
        }

        a--; //5kg 짜리 봉지 수 줄여서 다시 시도 해보기
     }
    
    if(rest != 0) 
    {
        cout << -1;
    }
    
}