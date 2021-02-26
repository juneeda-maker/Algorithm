#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int temp = x;

    for(int i = 0; i < n; i++)
    {
        answer.push_back(temp);
        temp += x;
    }


    return answer;
}

int main(void)
{
    int x,n;
    cin >> x >> n;
    
    for(int num : solution(x, n))
    {
        cout << num;
    }
}