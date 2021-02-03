
#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

 
vector<int> solution(vector<int> arr) 
{
    
    vector<int> answer;
    int tmp = arr[0];
    answer.push_back(arr[0]);

    for(int i = 1; i < arr.size(); i++)
    {
        if(tmp == arr[i])
        {
            continue;
        }
        else
        {
            answer.push_back(arr[i]);
            tmp = arr[i];
            
        }
    }
    
    return answer;
}


int main(void)
{
    vector<int> arr = {1,1,3,3,0,1,1};

    for(int num : solution(arr))
    {
        cout << num << endl;
    }
   

}








/*
새롭게 배운 참고용 코드
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) 
{

    arr.erase(unique(arr.begin(), arr.end()),arr.end());

    vector<int> answer = arr;
    return answer;
}
*/