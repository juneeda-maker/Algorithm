#include <iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }

    answer = sum / arr.size();
    return answer;
}

int main(void)
{
    vector<int> arr = {1,2,3,4};
    cout << solution(arr);
}