#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n; //로프의 갯수
    
    cin >> n;

    vector<int> arr(n); //각각의 로프가 버틸 수 있는 최대 중량.
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int result = 0;
    int tmp;

    for(int i = n-1; i >= 0; i--)
    {   
        tmp = arr[i] * (n-i);  //사용한 로프 개수 만큼 곱해서 중량 추출

        if(tmp > result)  //대소 비교 적용
        {
            result = tmp;
        }
        
    }

    cout << result;
}