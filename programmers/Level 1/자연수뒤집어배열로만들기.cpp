#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    while(n)//0이 아닐때
    {
        answer.push_back(n % 10);
        n = n / 10;
    } 

    return answer;
}

int main(void)
{
    long long n;
    cin >> n;

    for(int num : solution(n))
    {
        cout << num;
    }

}