#include <string>
#include <vector>
#include <iostream>

using namespace std;



int solution(int n) {
    int answer = 0; 
    int i,j;
    int check[n+1];

    for(i = 2; i <= n; i++) //모든 원소를 소수라고 가정
    {
        check[i] = 1;
    }
    

    for(i = 2; i <= n; i++) // 범위내의 모든 숫자중 배수(소수가 아닌 수)를 지워주기 위한 for문
    {
        if(check[i]==1)
        {
            for(j = 2*i; j <= n; j += i) // 배수를 지워준다.  
            {
                check[j] = 0;
            }
        }
    }

    for(i = 2; i <= n; i++) //check == 1일때는 소수이므로 소수의 개수를 구해준다.
    {
        if(check[i]==1)
        {
            answer++;
        }
    }


    
    return answer;
}






int main(void)
{
    int n;
    cin >> n;
    cout << solution(n);
}