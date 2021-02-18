#include <string>
#include <vector>
#include <iostream>


using namespace std;

string solution(string phone_number) {
    string answer = "";

    int num = phone_number.size();

    for(int i = 0; i < num-4; i++)
    {
        answer = answer + '*';
    }

    for(int i = num -4; i < num; i++)
    {
        answer = answer + phone_number.at(i);
    }
    return answer;
}

int main(void)
{
    string phone_num;

    cin >> phone_num;

    cout << solution(phone_num);
}