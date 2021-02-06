#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i]%divisor == 0) //나누어떨어지는 경우
        {
            answer.push_back(arr[i]);
        }
        
    }
    if(answer.size() == 0) //전부다 확인하고 어떤원소도 나누어 떨어지지 않는경우
    {
        answer.push_back(-1);
    }
    sort(answer.begin(), answer.end()); //리턴전에 오름차순으로 정렬
    return answer;
}

int main(void)
{   
    vector<int> arr = {3,2,6};
    int divisor = 10;
    for(int num : solution(arr, divisor))
    {
        cout << num;
    }
}