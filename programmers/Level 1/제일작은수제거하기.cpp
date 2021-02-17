#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int tmp = arr[0];

    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < tmp)
        {
            tmp = arr[i];
        }
    }

    for(int i = 0; i < arr.size(); i++)
    {
        if(tmp == arr[i])
        {
            arr.erase(arr.begin()+i);
        }
    }


   if(arr.size() == 0)
   {
       answer.push_back(-1);
   }
   
   return arr;
}

int main(void)
{
    vector<int> arr = {4,3,2,1};

    for(int num : solution(arr))
    {
        cout << num;
    }
  
}

