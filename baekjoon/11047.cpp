#include<iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n,k;  //n: 동전 종류의 갯수 k: 입력받을 가격 
    int count = 0; //count : 입력받은 가격 k 을 동전으로 나타냈을때 그 동전들의 갯수

    cin >> n >> k;
    
    vector<int> c(n);
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for(int i = n-1; i >= 0; i--)
    {
        count = count + k/c[i];
        k = k % c[i];
    }

    //큰수에서 부터 차례대로 나눠준후 동전갯수는 count 에 저장
    //잔돈은 k 에 저장해서 계속 반복해준다

    cout << count;
}